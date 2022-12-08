#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define INFINITO 9999999

typedef struct grafo Grafo;
typedef struct node Node;

struct node{
    int vertice;
    int peso;
    Node *prox;
};

struct grafo{
    int nro_vertices;
    Node **adj;
};

Grafo *cria_grafo(int nro_cidades){
    Grafo *gr = (Grafo*) malloc(sizeof(struct grafo));
    if(gr != NULL){
        int i;
        gr->nro_vertices = nro_cidades;
        gr->adj = (Node**) malloc(nro_cidades * sizeof(Node*));
        for(i = 0; i < nro_cidades; i++){
            gr->adj[i] = NULL;
        }
    }
    return gr;
}

int insere_aresta(Grafo *gr, int orig, int dest, int peso){
    if(gr == NULL)
        return 0;
    // GRAFO DIRECIONADO
    Node *node = (Node*) malloc(sizeof(Node));
    node->vertice = dest;
    node->peso = peso;
    node->prox = gr->adj[orig];
    gr->adj[orig] = node;
    return 1;
}


int mesmo_pais(Grafo *gr, int orig, int dest){
    if(gr == NULL)
        return 0;
    //se existir orig -> dest e dest <- orig
    Node *nodeO = gr->adj[orig];
    Node *nodeD = gr->adj[dest];
    while(nodeO != NULL && nodeO->vertice != dest){
        nodeO = nodeO->prox;
    }
    while(nodeD != NULL && nodeD->vertice != orig){
        nodeD = nodeD->prox;
    }
    if(nodeO != NULL && nodeD != NULL)
        return 1;
    return 0;
   
}

void imprime_grafo(Grafo *gr){
    if(gr == NULL)
        return;
    int i;
    for(i = 0; i < gr->nro_vertices; i++){
        Node *node = gr->adj[i];
        printf("%d: ", i);
        while(node != NULL){
            printf("%d ", node->vertice);
            node = node->prox;
        }
        printf(" \n");
    }
}

int djkistra(Grafo *gr, int orig, int dest){
    if(gr == NULL)
        return 0;
    int i, cont = 0, aux = 0;
    int *dist = (int*) malloc(gr->nro_vertices * sizeof(int));
    int *visitado = (int*) malloc(gr->nro_vertices * sizeof(int));
    for(i = 0; i < gr->nro_vertices; i++){
        dist[i] = INFINITO;
        visitado[i] = 0;
    }
    dist[orig] = 0;
    while(1){
        int menor_distancia = INFINITO;
        int prox_vertice = -1;
        for(i = 0; i < gr->nro_vertices; i++){
            if(!visitado[i] && dist[i] < menor_distancia ){
                
                menor_distancia = dist[i];
                prox_vertice = i;
            }
        }
        if(prox_vertice == -1)
            break;
        visitado[prox_vertice] = 1;
        Node *node = gr->adj[prox_vertice];
        while(node != NULL){
            int v = node->vertice;
            if(!visitado[v]){
                if(mesmo_pais(gr, prox_vertice, v)){
                    if(dist[v] > dist[prox_vertice]){
                        dist[v] = dist[prox_vertice];
                    }
                }
                else{
                    if(dist[v] > dist[prox_vertice] + node->peso){
                        dist[v] = dist[prox_vertice] + node->peso;
                    }
                }

            }
            node = node->prox;
        }
    }
    if(dist[dest] == INFINITO)
        return -1;
    return dist[dest];
}


int main() {
  
  Grafo *gr;
  int N, E, K, O, D, M, X, Y, H,  i, j, cont = 0;
  FILE *arq = fopen("entrada.txt", "r");
  FILE *arq2 = fopen("saida1.txt", "w");
  FILE *arq3 = fopen("saida2.txt", "w");

  while(1){
    fscanf(arq, "%d %d ", &N, &E);
    //printf("%d %d\n", N, E );
    if(N == 0 && E == 0)break;
    gr = cria_grafo(N);
    char info[150];
    int tam_info = 0;
    for(i = 0; i < E; i++){
      fscanf(arq, "%d %d %d ", &X, &Y, &H);
      //printf("%d %d %d\n", X, Y, H);
      insere_aresta(gr, X, Y, H);
    }
    fscanf(arq, "%d ", &K);
    //printf("%d\n", K);
    printf("%d\n", cont);
    if (cont > 0) fprintf(arq2, "\n");
    fprintf(arq2, "%d\n", cont);
    // concatena o numero do caso de teste
    sprintf(info, "|%d|", cont);
    for(i = 0; i < K; i++){
      fscanf(arq, "%d %d ", &O, &D);
      //printf("%d %d\n", O, D);
      char aux[80]; 
      M = djkistra(gr, O, D);
      printf("%d %d", O, D);
      fprintf(arq2, "%d %d", O, D);
      // exemplo aux : 1,2,3 ou 1,2,Rota desconhecida
      sprintf(aux, "%d,%d", O, D);
      if(M == -1) {
        printf(" Rota desconhecida! \n");
        fprintf(arq2, " Rota desconhecida! \n");
        strcat(aux, ",Rota desconhecida!|");
      }
      else {
        printf(" %d\n", M);
        fprintf(arq2, " %d\n", M);
        sprintf(aux, "%d,%d,%d|", O, D, M);
      }
      strcat(info, aux);
    }

    fprintf(arq3, "%ld%s\n", strlen(info),info);
    cont++;
  }
  fclose(arq);
  fclose(arq2);
  fclose(arq3);
  return 0;
}