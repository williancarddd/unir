#include <stdio.h>
#include <stdlib.h>
#define VERTEX 5

/*
  Author: William Cardoso Barbosa
  Course: Computer Science
  GitHub: williancarddd
  Year: 2022
*/

/*
 algumas funções supõem que o v e e são diferentes, positivos e menores que  G->V
*/

typedef struct list_vertex_adjacent {
  int amount;
  int list[][2];
}list_vertex_adjacent;


typedef struct node { 
   int w; 
   struct node *next; 
}node;

typedef struct Graph {
   int V; 
   int A; 
   node *adj; 
}Graph;




Graph *start_graph(int v) {
   Graph *G = (Graph *) malloc(sizeof(Graph));
   G->V = v;
   G->A = 0;
   G->adj = (node *) malloc(v * sizeof(node));
   for (int i = 0; i < v; i++) {
      G->adj[i].w = i;
      G->adj[i].next = NULL;
   }
   return G;
}

void insert_edge(Graph *G, int v, int w) {
  // x, y -> y,x
  for(node *x = G->adj[v].next; x != NULL; x = x->next) {
    if(x->w == w) {
      return;
    }
  }
  node *new = (node *) malloc(sizeof(node));
  new->w = w;
  new->next = G->adj[v].next;
  G->adj[v].next = new;
  G->A++;
}

void remove_edge(Graph *G, int v, int w) {
  node *x = G->adj[v].next;
  node *prev = &G->adj[v];
  while(x != NULL) {
    if(x->w == w) {
      prev->next = x->next;
      free(x);
      G->A--;
      return;
    }
    prev = x;
    x = x->next;
  }
}

void get_adjacents_vertex(Graph *G, list_vertex_adjacent *L, int v) {
  L->amount = 0;
  for(node *x = G->adj[v].next; x != NULL; x = x->next) {
    L->list[L->amount][0] = v;
    L->list[L->amount][1] = x->w;
    L->amount++;
  }
}

void show_list_vertex_adjacent(list_vertex_adjacent *L) {
  for(int i = 0; i < L->amount; i++) {
    printf("(%d, %d) | ", L->list[i][0], L->list[i][1]);
  }

  printf("\n");
  printf("first vertex: (%d, %d)\n", L->list[0][0], L->list[0][1]);
  printf("next vertex: (%d, %d)\n", L->list[1][0], L->list[1][1]);
}

void check_edge(Graph *G, int v, int w) {
  for(node *x = G->adj[v].next; x != NULL; x = x->next) {
    if(x->w == w) {
      printf("Edge exists\n");
      return;
    }
  }
  printf("Edge not exists\n");
}


void show_graph(Graph *G) {
    node *aux;
    for (int i = 0; i < G->V; i++) {
        aux = G->adj[i].next;
        printf("%d: ", G->adj[i].w);
        while (aux != NULL) {
          printf("%d ", aux->w);
          aux = aux->next;
        }
        printf("\n");
    }
}

int main() {
  Graph *G = start_graph(VERTEX);
  list_vertex_adjacent *L = (list_vertex_adjacent *) malloc(sizeof(list_vertex_adjacent));

  insert_edge(G, 0, 4);
  insert_edge(G, 0, 1);
  insert_edge(G, 1, 3);
  insert_edge(G, 1, 2);
  insert_edge(G, 1, 4);
  insert_edge(G, 1, 0);
  insert_edge(G, 2, 3);
  insert_edge(G, 2, 1);
  insert_edge(G, 3, 2);
  insert_edge(G, 3, 4);
  insert_edge(G, 3, 1);
  insert_edge(G, 4, 1);
  insert_edge(G, 4, 0);
  insert_edge(G, 4, 3);

  show_graph(G);

  //remove_edge
  remove_edge(G, 0, 4);

  //check edge
  check_edge(G, 0, 4);
  check_edge(G, 0, 3);

  printf("\n");
  show_graph(G);

  //get adjacents vertex
  get_adjacents_vertex(G, L, 4);
  show_list_vertex_adjacent(L);
  printf("\n");
  return 0;
}