#include <stdio.h>;
#include <stdlib.h>;

struct conta {
  int num_conta;
  char tipo_conta[10];
  char nome[30];
};
void main() {
  struct conta ContaWilliam;
  ContaWilliam.num_conta = 123;
  strcpy(ContaWilliam.tipo_conta, "Corrente");
  strcpy(ContaWilliam.nome, "William");

  printf("%d\n", ContaWilliam.num_conta);
  printf("%s\n", ContaWilliam.tipo_conta);
  printf("%s\n", ContaWilliam.nome);
  
}