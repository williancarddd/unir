#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * No ano 2666, após diversas tentativas da ONU de manter a paz no mundo, explode a terceira guerra mundial. 
 * Segredosindustriais, comerciais e militares obrigaram todos os países a utilizarem serviços de espionagem
 * extremamente sofisticados,de forma que em cada cidade do mundo há ao menos um espião de cada país.
 * Esses espiões precisamse comunicarcomoutros espiões, com informantes e mesmo com as suas centrais durante as suas ações.
 * Infelizmente não existeumaformasegura de um espião se comunicar em um período de guerra, então as mensagens são sempre enviadas emcódigoparaquesomente o destinatário consiga ler a mensagem e entender o seu significado. 
 * Os espiões utilizam o único serviço que funciona no período de guerra, o “malote da Eucatur”. 
 * Cada cidadepossui umaagência onde as cartas são enviadas. As cartas podem ser enviadas diretamente ao seu destino ou a outras agências, atéquea carta chegue à agência da cidade de destino, se isso for possível. 
 * Uma agência na cidade A pode enviar diretamente uma carta impressa para a agência da cidade B se houver umacordodeenvio de cartas, que determina o tempo, em horas, que uma carta leva para chegar da cidade Aà cidadeB(enãonecessariamente o contrário). 
 * Se não houver um acordo entre as agências A e B, a agência A pode tentar enviar acartaaquantas agências for necessário para que a carta chegue ao seu destino, se isso for possível. Algumas agências são interligadas por meios eletrônicos de comunicação, como satélites e fibras ópticas. 
 * Antes daguerra,essas ligações atingiam todas as agências, fazendo com que uma carta fosse enviada de forma instantânea, mas duranteoperíodo de hostilidades cada país passou a controlar a comunicação eletrônica e uma agência somente pode enviar umacartaa outra agência por meio eletrônico (ou seja, instantaneamente) se ela estiver no mesmo país. 
 * Duas agências, AeB, estãono mesmo país se houver uma forma de uma carta impressa enviada de uma das agências ser entregue na outra agência. O serviço de espionagem do seu país conseguiu obter o conteúdo de todos os acordos de envios de mensagens existentesnomundo e deseja descobrir algumas informações sobre este serviço de envio de mensagens. 
 * Você seria capaz de ajudá-lo?
 * 
 */

/*
Entrada
A entrada contém vários casos de teste, e será realizada por meio de um arquivo padrão (“entrada.txt”).
Aprimeiralinhadecada caso de teste contém dois inteiros separados por um espaço, N (1 ≤ N ≤ 500) e E (0 ≤ E ≤ N^2), indicandoonúmerodecidades (numeradas de 1 a N) e de acordos de envio de mensagens, respectivamente.
Seguem-se, então, E linhas, cada uma com três inteiros separados por espaços, X, Y e H (1 ≤ X, Y≤ N, 1≤H≤1000),
indicando que existe um acordo para enviar uma carta impressa da cidade X à cidade Y , e que tal carta será entreguem horas.

Em seguida, haverá uma linha com um inteiro K (0 ≤ K ≤ 100), o número de consultas.
Finalmente, virão Klinhas, cada uma representando uma consulta e contendo dois inteiros separados por um espaço, O e D (1 ≤ O, D≤N). 
Vocêdeve determinar o tempo mínimo para se enviar uma carta da cidade O à cidade D. A entrada termina quando N=E=0

Exemplo de Entrada
4 5
1 2 5
2 1 10
3 4 8
4 3 7
2 3 6
5
1 2
1 3
1 4
4 3
4 1
3 3
1 2 10
2 3 1
3 2 1
3
1 3
3 1
3 2
0 0
*/

/*
Saida 1
Para cada arquivo de entrada seu programa deve produzir um arquivo de saída padrão (“saida1.txt”) com K+1 linhasna saída para cada teste.
A primeira linha deve conter um contador CONT (CONT ≥ 0) indicando o número do teste, seguido de K linhas, onde a I-ésima linha deve conter: um inteiro O, indicando a origem; um inteiro D, indicando o destino; e uminteiro M, indicando o tempo mínimo, em horas, para se enviar uma carta na I-ésima consulta. 
Se não houver meio de comunicação entre as cidades da consulta, o programa deve escrever: um inteiro O, indicando a origem; um inteiro D, indicando o destino;e a mensagem “Rota desconhecida!”. 
Escreva uma linha em branco (“\n”) após cada caso de teste.

Exemplo de saída para o exemplo de entrada acima:
0
1 2 0
1 3 6
1 4 6
4 3 0
4 1 Rota desconhecida!
1
1 3 10
3 1 Rota desconhecida!
3 2 0
*/

//usando a estrutura de dados grafo

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

void libera_grafo(Grafo *gr){
    if(gr != NULL){
        int i;
        for(i = 0; i < gr->nro_vertices; i++){
            Node *node = gr->adj[i];
            while(node != NULL){
                Node *t = node;
                node = node->prox;
                free(t);
            }
        }
        free(gr->adj);
        free(gr);
    }
}

int insere_aresta(Grafo *gr, int orig, int dest, int peso){
    if(gr == NULL)
        return 0;
    Node *node = (Node*) malloc(sizeof(Node));
    node->vertice = dest;
    node->peso = peso;
    node->prox = gr->adj[orig];
    gr->adj[orig] = node;
    return 1;
}

int remove_aresta(Grafo *gr, int orig, int dest){
    if(gr == NULL)
        return 0;
    Node *node = gr->adj[orig];
    Node *ant = NULL;
    while(node != NULL && node->vertice != dest){
        ant = node;
        node = node->prox;
    }
    if(node == NULL)
        return 0;
    if(ant == NULL)
        gr->adj[orig] = node->prox;
    else
        ant->prox = node->prox;
    free(node);
    return 1;
}

int djkistra(Grafo *gr, int orig, int dest){
    /*
    
    1 2 0
    1 3 6
    1 4 6
    4 3 0
    4 1 -1*/
  
    int i, cont = 0, aux = 0;
    int *dist = (int*) malloc(gr->nro_vertices * sizeof(int));
    int *visitado = (int*) malloc(gr->nro_vertices * sizeof(int));
    for(i = 0; i < gr->nro_vertices; i++){
        dist[i] = 999999;
        visitado[i] = 0;
    }
    dist[orig] = 0;

    while(1){
        int menor_dist = 999999;
        int menor_vertice = -1;
        for(i = 0; i < gr->nro_vertices; i++){
            if(!visitado[i] && dist[i] < menor_dist){
                menor_dist = dist[i];
                menor_vertice = i;
            }
        }
        if(menor_vertice == -1)
            break;
        visitado[menor_vertice] = 1;
        Node *node = gr->adj[menor_vertice];
        while(node != NULL){
            int v = node->vertice;
            if(dist[menor_vertice] + node->peso < dist[v]){
                dist[v] = dist[menor_vertice] + node->peso;
            }
            node = node->prox;
        }
    }

    if(dist[dest] == 999999)
        return -1;
    else
        return dist[dest];
}

int consulta_aresta(Grafo *gr, int orig, int dest, int *peso){
    if(gr == NULL)
        return 0;
    Node *node = gr->adj[orig];
    while(node != NULL && node->vertice != dest){
        node = node->prox;
    }
    if(node == NULL)
        return 0;
    else{
        *peso = node->peso;
        return 1;
    }
}


int main() {
  
  Grafo *gr;
  int N, E, K, O, D, M, X, Y, H,  i, j, cont = 0;
  FILE *arq = fopen("entrada.txt", "r");

  while(1){
    fscanf(arq, "%d %d ", &N, &E);
    if(N == 0 && E == 0)
      break;
    gr = cria_grafo(N);
    for(i = 0; i < E; i++){
      fscanf(arq, "%d %d %d ", &X, &Y, &H);
      insere_aresta(gr, X, Y, H);
    }
    fscanf(arq, "%d ", &K);

    printf("\n----------------------\n");
    for(i = 0; i < K; i++){
      fscanf(arq, "%d %d ", &O, &D);
      M = djkistra(gr, O, D);
      printf("%d %d %d\n", O, D, M);

    }
  }

  return 0;
}