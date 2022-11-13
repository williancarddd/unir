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

typedef struct GraphMatriz {
  int V;
  int E;
  int **adj;
} GraphMatriz;


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

int check_edge(Graph *G, int v, int w) {
  for(node *x = G->adj[v].next; x != NULL; x = x->next) {
    if(x->w == w) {
      return 1;
    }
  }
  return 0;
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


int* calc_degress(Graph *G) {
  int *degress = (int *) malloc(G->V * sizeof(int));
  for(int i = 0; i < G->V; i++) {
    degress[i] = 0;
  }
  for(int i = 0; i < G->V; i++) {
    for(node *x = G->adj[i].next; x != NULL; x = x->next) {
      degress[i]++;
    }
  }
  return degress;
}

int calc_degress_out(Graph G, int v) {
  int degress = 0;
  for(node *x = G.adj[v].next; x != NULL; x = x->next) {
    degress++;
  }
  return degress;
}

int calc_degress_in(Graph *G, int v) {
  int degress = 0;
  for(int x = 0; x < G->V; x++) {
    for(node * a = G->adj[x].next; a != NULL; a = a->next) {
      if(a->w == v) {
        degress++;
      }
    }
  }
  return degress;
}

int *isSink(Graph *G) {
  int *sinks = (int *) malloc(G->V * sizeof(int));
  for(int x = 0; x < G->V; x++) {
    int degress_out = calc_degress_out(*G, x);
    if(degress_out == 0) {
      sinks[x] = 1;
    } else {
      sinks[x] = 0;
    }
  }
  return sinks;
}

int *isSource(Graph *G) {
  int *sources = (int *) malloc(G->V * sizeof(int));
  for(int x = 0; x < G->V; x++) {
    int degress_out = calc_degress_in(G, x);
    if (degress_out == 0) {
      sources[x] = 1;
    } else {
      sources[x] = 0;
    }
  }
  return sources;
}

void show_sinks(Graph *G) {
  int *sinks = isSink(G);
  for(int i = 0; i < G->V; i++) {
    if(sinks[i] == 1) {
      printf("Sink: %d\n", i);
    }
  }
}

void show_sources(Graph *G) {
  int *sources = isSource(G);
  for(int i = 0; i < G->V; i++) {
    if(sources[i] == 1) {
      printf("Source: %d\n", i);
    }
  }
}

void GRAPHequal(Graph  *G, Graph *H) {
  if(G->V != H->V) {
    printf("Graphs are not equal\n");
    return;
  }
  for(int i = 0; i < G->V; i++) {
    for(node *x = G->adj[i].next; x != NULL; x = x->next) {
      for(node *y = H->adj[i].next; y != NULL; y = y->next) {
        if(x->w != y->w) {
          printf("Graphs are not equal\n");
          return;
        }
      }
    }
  }
  printf("Graphs are equal\n");
}


Graph*  create_complet_graph(int v) {
  Graph *G = start_graph(v);
  for(int x = 0; x < G->V; x++) {
    for(int i = 0; i < G->V; i++) {
      if(!check_edge(G, x, i)) {
        insert_edge(G, x, i);
      }
    }
  }
  return G;
}

Graph* convert_matriz_graph_to_graph(GraphMatriz *G) {
  Graph *graph = start_graph(G->V);
  for(int i = 0; i < G->V; i++) {
    for(int j = 0; j < G->V; j++) {
      if(G->adj[i][j] == 1) {
        insert_edge(graph, i, j);
      }
    }
  }
  return graph;
}

GraphMatriz* convert_graph_to_matriz_graph(Graph *G) {
  GraphMatriz *graph = start_graph_matriz(G->V);
  for(int i = 0; i < G->V; i++) {
    for(node *x = G->adj[i].next; x != NULL; x = x->next) {
      graph->adj[i][x->w] = 1;
    }
  }
  return graph;
}

int main() {
  Graph *G = start_graph(VERTEX);
  Graph *H = start_graph(VERTEX);
  Graph *Complet = create_complet_graph(VERTEX);

  show_graph(Complet);

  printf("\n");
  insert_edge(H, 0, 1);
  insert_edge(H, 0, 2);
  insert_edge(H, 1, 2);
  insert_edge(H, 2, 0);
  insert_edge(H, 2, 3);
  insert_edge(H, 3, 3);


  insert_edge(G, 0, 1);
  insert_edge(G, 1, 3);
  insert_edge(G, 1, 4);
  insert_edge(G, 2, 0);
  insert_edge(G, 3, 2);
  insert_edge(G, 4, 3);
  show_graph(G);
  
  show_sinks(G); // for this graph no have sinks
  show_sources(G);

  //check equals
  GRAPHequal(G, H);
  return 0;
}