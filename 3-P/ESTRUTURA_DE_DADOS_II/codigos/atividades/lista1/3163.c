#include <stdio.h>
#include <string.h>
#define MAX 1000


/*
O aeroporto de Congonhas recebe todos os dias uma média de 600 pousos e decolagens, ou cerca de 36 por hora. No último ano, foram exatamente 223.989 movimentos aéreos. Para organizar todo o fluxo de aviões que chegam a Congonhas e saem de lá, a torre de controle funciona o tempo inteiro com nível máximo de atenção. Para descartar qualquer possibilidade de erro humano o chefe do controle de tráfego aéreo de Congonhas contratou você para desenvolver um programa que organize automaticamente o fluxo de aviões no campo de pouso. Para isso, basta seguir o seguinte protocolo, os aviões que veem do lado Oeste da pista têm maior prioridade de serem colocados na fila, pois são aqueles que estão mais próximo do localizador (início da pista).  Já os aviões que estão se aproximando pelo lado Norte e Sul, devem ser inseridos na fila 1 por vez, ou seja, insere-se 1 avião do lado Norte e em seguida 1 avião do lado Sul. Por último, insere-se o próximo avião que esteja se aproximando ao lado leste da pista.

Entrada
A entrada é composta por um número inteiro P, representando o ponto cardeal do avião que entrou no campo da pista (-4 <= P <= -1), onde (-4 representa o lado leste, -3 o lado norte, -2 lado sul e -1 lado oeste) . Em seguida é realizada a entrada dos respectivos aviões, compostos de um identificador começando com a letra “A” seguida de um número inteiro I (1 <= I <= 1000). A qualquer momento é permitido trocar o ponto cardeal, e inserir novas aeronaves, repetidamente até que o controlador finalize a sessão com o dígito 0. 
*/

typedef struct {
  char airplane[5];
  int privilage_level;
}struct_airplane;

typedef struct  {
  int amount;
  struct_airplane airplanes[MAX];
}fila_ariplane;

/*
int insert_start(fila_ariplane * fila, struct_airplane airplane) {
  for(int i = 0; i < fila->amount+1; i ++) {
    struct_airplane aux = fila->airplanes[i]; // l->[0] = 5 l->[1] = 2 l->[2] = 3
    fila->airplanes[i] = airplane; // L->[2] = 2
    airplane = aux;
  }
  fila->amount++;
  return 0;
}
*/
int insert_to_privilage_level(fila_ariplane * fila, struct_airplane  airplane){
  //Para isso, basta seguir o seguinte protocolo, os aviões que veem do lado Oeste da pista têm maior prioridade de serem colocados na fila, pois são aqueles que estão mais próximo do localizador (início da pista).
  //Já os aviões que estão se aproximando pelo lado Norte e Sul, devem ser inseridos na fila 1 por vez, ou seja, insere-se 1 avião do lado Norte e em seguida 1 avião do lado Sul. Por último, insere-se o próximo avião que esteja se aproximando ao lado leste da pista.
  if(fila->amount == 0) {
    fila->airplanes[0] = airplane;
    fila->amount++;
    return 0;
  } else {
    if(airplane.privilage_level == 1) {
      fila->airplanes[fila->amount] = airplane;
      fila->amount++;
      return 0;
    } else {
      for(int i = 0; i < fila->amount; i++) {
        if(fila->airplanes[i].privilage_level == 1) {
          for(int j = fila->amount; j > i; j--) {
            fila->airplanes[j] = fila->airplanes[j-1];
          }
          fila->airplanes[i] = airplane;
          fila->amount++;
          return 0;
        }
      }
      fila->airplanes[fila->amount] = airplane;
      fila->amount++;
      return 0;
    }
  }
  
  return 0;
}

void show_fila(fila_ariplane * fila) {
  for(int i = 0; i < fila->amount; i++) {
    printf("[%s %d]", fila->airplanes[i].airplane, fila->airplanes[i].privilage_level);
  }
  printf("\n");
}

void start(fila_ariplane *fila) {
  fila->amount = 0;
}

int main() {
 
  int mode_add_airplane = 0;
  fila_ariplane database_airplanes;
  start(&database_airplanes);

  while (1) {
    char entrada[5];
    scanf("%s", entrada);
    if(*entrada == '0') {
      break;
    } else {
      if(entrada[0] != 'A') {
        if(strcmp(entrada, "-1") == 0) {
          mode_add_airplane = -1;
        } else if(strcmp(entrada, "-2") == 0) {
          mode_add_airplane = -2;
        } else if(strcmp(entrada, "-3") == 0) {
          mode_add_airplane = -3;
        } else if(strcmp(entrada, "-4") == 0) {
          mode_add_airplane = -4;
        }
        //printf("\nmodo: %d", mode_add_airplane);
      } else {
        if(entrada[0] == 'A') {
          struct_airplane airplane;
          strcpy(airplane.airplane, entrada);
          airplane.privilage_level = mode_add_airplane;
          insert_to_privilage_level(&database_airplanes, airplane);
        } else {
          mode_add_airplane = 0;
        }
      }
    }
  }
  show_fila(&database_airplanes);
  return 0;
}