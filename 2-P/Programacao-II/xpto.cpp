#include <stdio.h>

void exibe(int vetor[], int tl){
		int i;
	for (i=0;i< tl;i++)
	   printf(" vetor[%2d]=%3d",i,vetor[i]);
  printf("\n");
}
void Bolha(int vetor[10], int tl){
	int i = 0, j;
	while(i < tl) {
		for(j = 0; j < tl ; j++) {
			if(vetor[j] >  vetor[j + 1]){
				int aux =  vetor[j + 1];
				vetor[j + 1] = vetor[j];
				vetor[j] = aux;
        exibe(vetor, tl);
			}
		}
		i++;
	}
}

main() {         //0, 1, 2, 3, 4  
  int vetor[10] = {5, 7, 3, 8, 30, 6, 7, 8, 9}; //desordenado

  // 5, 7, 3, 8, 30, 6, 7, 8, 9
  // 5, 3, 7, 8, 30, 6, 7, 8, 9
  //5, 3, 7, 8, 6, 30, 7, 8, 9
  //5, 3, 7, 8, 6, 7, 30, 8, 9
  //5, 3, 7, 8, 6, 7, 8, 30, 9
  //5, 3, 7, 8, 6, 7,8 , 30 , 9
  //5, 3, 7, 8, 6, 7,8 , 9, 30
  Bolha(vetor, 10);
}