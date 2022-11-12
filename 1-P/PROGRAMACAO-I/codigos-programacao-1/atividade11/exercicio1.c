#include <stdlib.h>;
#include <stdio.h>;
#include <string.h>;
#define max_nome 50
#define max_iniciais 10

void converte_maiusculo(char *nome)
{
  int i;
  for (i = 0; i < strlen(nome); i++){
    if (nome[i] >= 'a' && nome[i] <= 'z'){
      nome[i] = nome[i] - 32;
    }
  }
}

int main()
{
  char nome[max_nome];
  char inciais[max_iniciais] = {};
  int passador_iniciais = 0;
  int aux_nome = 0;
  gets(nome);

  while (nome[aux_nome] != '\0'){
    if (aux_nome == 0) {
      inciais[passador_iniciais] = nome[aux_nome];
      passador_iniciais++;
    }

    if (nome[aux_nome] == ' ') {
      inciais[passador_iniciais] = nome[aux_nome + 1];
      passador_iniciais++;
    }
    aux_nome++;
  }


  converte_maiusculo(inciais);
  printf("%s", inciais);
  return 0;
}