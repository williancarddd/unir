/*
 Vários trechos de código retirados da página:
 https://www.ime.usp.br/~pf/algoritmos_para_grafos/aulas/graphdatastructs.html

 Estrutura de Dados II
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Vértices de grafos são representados por objetos do tipo vertex. */
#define vertex int

/* REPRESENTAÇÃO POR MATRIZ DE ADJACÊNCIAS: A função MATRIXint() aloca uma matriz com linhas 0..r-1 e colunas 0..c-1. Cada elemento da matriz recebe valor val. */
static int **MATRIXint( int r, int c, int val) { 
   int **m = malloc( r * sizeof (int *));
   for (vertex i = 0; i < r; ++i) 
      m[i] = malloc( c * sizeof (int));
   for (vertex i = 0; i < r; ++i)
      for (vertex j = 0; j < c; ++j)
         m[i][j] = val;
   return m;
}

/* REPRESENTAÇÃO POR MATRIZ DE ADJACÊNCIAS: A estrutura graph representa um grafo. O campo adj é um ponteiro para a matriz de adjacências do grafo. O campo V contém o número de vértices e o campo A contém o número de arcos do grafo. */
struct graphMatrix {
   int V; 
   int A; 
   int **adj; 
};
/* Um Graph é um ponteiro para um graph, ou seja, um Graph contém o endereço de um graph. */
typedef struct graphMatrix *GraphMatrix;

/* REPRESENTAÇÃO POR MATRIZ DE ADJACÊNCIAS: A função GRAPHmatrixInit() constrói um grafo com vértices 0 1 .. V-1 e nenhum arco. */
GraphMatrix GRAPHmatrixInit( int V) { 
   GraphMatrix G = malloc( sizeof *G);
   G->V = V; 
   G->A = 0;
   G->adj = MATRIXint( V, V, 0);
   return G;
}

/* REPRESENTAÇÃO POR MATRIZ DE ADJACÊNCIAS: A função GRAPHmatrixInsertArc() insere um arco v-w no grafo G. A função supõe que v e w são distintos, positivos e menores que G->V. Se o grafo já tem um arco v-w, a função não faz nada. */
void GRAPHmatrixInsertArc( GraphMatrix G, vertex v, vertex w) { 
   if (G->adj[v][w] == 0) {
      G->adj[v][w] = 1; 
      G->A++;
   }
}

/* REPRESENTAÇÃO POR MATRIZ DE ADJACÊNCIAS: A função GRAPHmatrixRemoveArc() remove do grafo G o arco v-w. A função supõe que v e w são distintos, positivos e menores que G->V. Se não existe arco v-w, a função não faz nada. */
void GRAPHmatrixRemoveArc( GraphMatrix G, vertex v, vertex w) { 
   if (G->adj[v][w] == 1) {
      G->adj[v][w] = 0; 
      G->A--;
   }
}

// Existe aresta?
bool GRAPHmatrixExistArc ( GraphMatrix G, vertex v, vertex w) { 
  if (G->adj[v][w] == 1) {
    return true;
  }
  else{
    return false;
  }
}

//Obter lista de vértices adjacentes a um determinado vértice
void GRAPHmatrixShowArcs( GraphMatrix G, vertex v) { 
  printf( "%2d|", v);
  for (vertex w = 0; w < G->V; ++w)
        printf( "\t%2d", G->adj[v][w]);
  printf( "\n");
}

/* REPRESENTAÇÃO POR MATRIZ DE ADJACÊNCIAS: A função GRAPHshow() imprime, para cada vértice v do grafo G, em uma linha, todos os vértices adjacentes a v. */
void GRAPHmatrixShow( GraphMatrix G) { 
  for (vertex v = 0; v < G->V; ++v) {
      printf( "\t%2d", v);
  }
  printf( "\n\t");
  for (vertex v = 0; v < G->V; ++v) {
      printf( "____");
  }
  printf( "\n");
   for (vertex v = 0; v < G->V; ++v) {
      printf( "%2d|", v);
      for (vertex w = 0; w < G->V; ++w)
            printf( "\t%2d", G->adj[v][w]);
      printf( "\n");
   }
}

/* A lista de adjacência de um vértice v é composta por nós do tipo node. Cada nó da lista corresponde a um arco e contém um vizinho w de v e o endereço do nó seguinte da lista. Um link é um ponteiro para um node. */
typedef struct node *link;
struct node { 
   vertex w; 
   link next; 
};

/* REPRESENTAÇÃO POR LISTAS DE ADJACÊNCIA: A estrutura graph representa um grafo. O campo adj é um ponteiro para o vetor de listas de adjacência, o campo V contém o número de vértices e o campo A contém o número de arcos do grafo. */
struct graphList {
   int V; 
   int A; 
   link *adj; 
};
/* Um Graph é um ponteiro para um graph. */
typedef struct graphList *GraphList;

/* A função NEWnode() recebe um vértice w e o endereço next de um nó e devolve o endereço a de um novo nó tal que a->w == w e a->next == next. */
static link NEWnode( vertex w, link next) { 
   link a = malloc( sizeof (struct node));
   a->w = w; 
   a->next = next;     
   return a;                         
}

/* REPRESENTAÇÃO POR LISTAS DE ADJACÊNCIA: A função GRAPHinit() constrói um grafo com vértices 0 1 .. V-1 e nenhum arco. */
GraphList GRAPHlistInit( int V) { 
   GraphList G = malloc( sizeof *G);
   G->V = V; 
   G->A = 0;
   G->adj = malloc( V * sizeof (link));
   for (vertex v = 0; v < V; ++v) 
      G->adj[v] = NULL;
   return G;
}
/* REPRESENTAÇÃO POR LISTAS DE ADJACÊNCIA: A função GRAPHinsertArc() insere um arco v-w no grafo G. A função supõe que v e w são distintos, positivos e menores que G->V. Se o grafo já tem um arco v-w, a função não faz nada. */
void GRAPHlistInsertArc( GraphList G, vertex v, vertex w) { 
   for (link a = G->adj[v]; a != NULL; a = a->next) 
      if (a->w == w) return;
   G->adj[v] = NEWnode( w, G->adj[v]);
   G->A++;
}

void GRAPHlistRemoveArc( GraphList G, vertex v, vertex w) { 
  link first_vertex = G->adj[v];
  if (first_vertex->w == w){
    link r = first_vertex;
    G->adj[v] = first_vertex->next;
    free(r);
    G->A--;
  }
  for (link a = G->adj[v]; a != NULL; a = a->next){
    if (a->next != NULL && a->next->w == w){
      link r = a->next;
      a->next = r->next;
      free(r);
      G->A--;
    }
  }
  
}

// Existe aresta?
bool GRAPHlistExistArc ( GraphList G, vertex v, vertex w) { 
  for (link a = G->adj[v]; a != NULL; a = a->next){
    if (a->next != NULL && a->w == w){
      return true;
    }
  }
  return false;
}

void GRAPHlistShowArcs( GraphList G, vertex v) { 
  printf( "%2d| ->", v);
  for (link a = G->adj[v]; a != NULL; a = a->next) {
    printf( "\t%2d ->", a->w);
  }
  printf("\n");
}

void GRAPHlistShow( GraphList G) { 
  for (vertex v = 0; v < G->V; ++v) {
    printf( "%2d| ->", v);
    for (link a = G->adj[v]; a != NULL; a = a->next) {
      printf( "\t%2d ->", a->w);
    }
    printf("\n");
  }  
}


int main(void) {
  GraphMatrix gAula = GRAPHmatrixInit(5);
  GRAPHmatrixShow(gAula);
  GRAPHmatrixInsertArc(gAula, 1,3);
  GRAPHmatrixShow(gAula);
  GraphList gAula2 = GRAPHlistInit(5);
  printf("\n\n");
  GRAPHlistShow(gAula2);
  printf("\n");
  GRAPHlistInsertArc(gAula2,1,3);
  GRAPHlistShow(gAula2);
  return 0;
}
