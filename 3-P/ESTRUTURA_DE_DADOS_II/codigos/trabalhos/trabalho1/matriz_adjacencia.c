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

typedef struct Graph {
  int V;
  int E;
  int **adj;
} Graph;

void start_graph(Graph *G, int v) {
  G->V = v;
  G->E = 0;
  G->adj = (int **) malloc(v * sizeof(int *));
  for (int i = 0; i < v; i++) {
    G->adj[i] = (int *) malloc(v * sizeof(int));
    for (int j = 0; j < v; j++) {
      G->adj[i][j] = 0;
    }
  }
}

int insert_edge(Graph *G, int v, int w) {
  if(G->adj[v][w] == 0) {
    G->adj[v][w] = 1;
    G->adj[w][v] = 1;
    G->E++;
    return 1;
  }
  return 0;
}

int remove_edge(Graph *G, int v, int w) {
  if(G->adj[v][w] == 1) {
    G->adj[v][w] = 0;
    G->adj[w][v] = 0;
    G->E--;
    return 1;
  }
  return 0;
}

int check_edge(Graph *G, int v, int w) {
  if(G->adj[v][w] == 1) {
    printf("Edge exists\n");
    return 1;
  }
  printf("Edge does not exist\n");
  return 0;
}

void get_adjacents_vertex(Graph *G, int v, list_vertex_adjacent *L) {
  //adjcente to determinate vertex
  for (int i = 0; i < G->V; i++) {
    if(G->adj[v][i] == 1) {
      L->list[L->amount][0] = v;
      L->list[L->amount][1] = i;
      L->amount++;
    }
  }
}

void show_list_adjacents(list_vertex_adjacent *L) {
  if(L->amount == 0) {
    printf("No adjacent vertex\n");
  } else {
    for (int i = 0; i < L->amount; i++) {
      printf("Vertex %d is adjacent to vertex %d\n", L->list[i][0], L->list[i][1]);
    }
  }
  printf("first vertex adjacent: (%d, %d)\n", L->list[0][0], L->list[0][1]);
  printf("next vertex adjacent: (%d, %d)\n", L->list[1][0], L->list[1][1]);
}

void show_graph(Graph *G, int vertex) {
  for (int i = 0; i < vertex; i++) {
    printf("%d: ", i);
    for (int j = 0; j < vertex; j++) {
      printf("%d ", G->adj[i][j]);
    }
    printf("\n");
  }
}

int main() {
  Graph *G = (Graph *) malloc(sizeof(Graph));
  list_vertex_adjacent *L = (list_vertex_adjacent *) malloc(sizeof(list_vertex_adjacent));
  start_graph(G, VERTEX);
  //create edges
  insert_edge(G, 0, 1);
  insert_edge(G, 0, 4);
  insert_edge(G, 1, 3);
  insert_edge(G, 3, 2);
  insert_edge(G, 2, 1);
  insert_edge(G, 1, 4);
  insert_edge(G, 4, 3);

  // remove edge
  remove_edge(G, 2, 1);
  show_graph(G, VERTEX);

  // check edge
  check_edge(G, 2, 1);
  check_edge(G, 1, 3);

  //get adjacent vertex
  get_adjacents_vertex(G, 4, L);

  //show adjacent vertex
  show_list_adjacents(L);


  printf("\n");
  return 0;
}