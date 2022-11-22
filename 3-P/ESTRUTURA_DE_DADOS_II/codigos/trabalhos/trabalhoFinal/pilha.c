#include <pilha.h>
#include <stdio.h>
#include <stdlib.h>

// cria uma pilha vazia

Pilha* pilha_cria (void) {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = 0;
    p->capacidade = 1;
    p->elementos = (int*) malloc(p->capacidade * sizeof(int));
    return p;
}

// empilha um elemento na pilha

void pilha_push (Pilha* p, float v) {
    if(p->topo == p->capacidade) {
        p->capacidade *= 2;
        p->elementos = (int*) realloc(p->elementos, p->capacidade * sizeof(int));
    }
    p->elementos[p->topo] = v;
    p->topo++;
}

// desempilha um elemento da pilha

float pilha_pop (Pilha* p){
    if (pilha_vazia(p)) {
        printf("Pilha vazia. \n");
        exit(1);
    }
    p->topo--;
    return p->elementos[p->topo];
}

// retorna 1 se a pilha estiver vazia e 0 caso contrário

int pilha_vazia (Pilha* p) {
    return (p->topo == 0);
}

// libera a memória alocada para a pilha

void pilha_libera (Pilha* p) {
    free(p->elementos);
    free(p);
}
