

// tipo abstrato pilha

typedef struct Pilha {
    int topo;
    int capacidade;
    int *elementos;
} Pilha;

// cria uma pilha vazia

Pilha* pilha_cria (void);

// empilha um elemento na pilha

void pilha_push (Pilha* p, float v);

// desempilha um elemento da pilha

float pilha_pop (Pilha* p);

// retorna 1 se a pilha estiver vazia e 0 caso contrário

int pilha_vazia (Pilha* p);

// libera a memória alocada para a pilha

void pilha_libera (Pilha* p);
