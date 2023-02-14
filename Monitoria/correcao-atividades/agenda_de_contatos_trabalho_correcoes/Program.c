#include <stdio.h>
#include <string.h>

#define TF 50

typedef struct st_contato {
	char nome[32];
	char telefone[16];
} contato;

int leitura(FILE* ptr, contato agenda[TF]) {
	int i = 0;
	char nome[32];
	char telefone[16];
	
	while (!feof(ptr) && fscanf(ptr, "%s %s\n", &nome, &telefone) == 2 && i < TF) {
		contato f;
		strcpy(f.nome, nome);
		strcpy(f.telefone, telefone);
		agenda[i++] = f;
	}
	
	return i;
}

void salvar(FILE* ptr, contato agenda[TF], int tamanho) {
	int i;
	
	for (i = 0; i < tamanho; i++)
		fprintf(ptr, "%s %s\n", agenda[i].nome, agenda[i].telefone);
}

int busca(char nome[32], contato agenda[TF], int tamanho) {
	int i;
	
	for (i = 0; i < tamanho; i++) {
		if (strcmp(agenda[i].nome, nome) == 0)
			return i;
	}
	
	return -1;
}

int main() {
	FILE* ptr;
	ptr = fopen("agenda.txt", "r");
	
	if (ptr == NULL) {
		printf("Arquivo não encontrado.");
		return 0;
	}
	
	/* Ler os contatos da agenda */
	contato agenda[TF];
	int tamanho = leitura(ptr, agenda);
	
	/* Fechar o arquivo */
	fclose(ptr);
	
	/* Menu */
	int escolha = 0;
	
	int i, j, k;
	char nome[32];
	char telefone[16];
	
	while (escolha != 7) {
		printf("1 - Leitura dos dados\n");
		printf("2 - Exibir a lista de contatos\n");
		printf("3 - Consultar um contato\n");
		printf("4 - Registrar um novo contato\n");
		printf("5 - Remover um contato\n");
		printf("6 - Salvar o arquivo\n");
		printf("7 - Sair\n");
		printf("> ");
		scanf("%d", &escolha);
		
		switch (escolha) {
			case 1:
				printf("\n");
				ptr = fopen("agenda.txt", "r");
				tamanho = leitura(ptr, agenda);
				printf("Foram encontrados %d contatos na agenda.\n", tamanho);
				fclose(ptr);
				printf("\n");
				break;
			
			case 2:
				printf("\n");
				printf("Exibindo a lista de contatos:\n");
				for (i = 0; i < tamanho; i++)
					printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
				printf("\n");
				break;
			
			case 3:
				printf("\n");
				
				printf("Digite o nome do contato:\n");
				printf("> ");
				scanf("%s", nome);
				printf("\n");
				
				/* Procurar o contato na lista */
				i = busca(nome, agenda, tamanho);
				printf("Consulta:\n");
				
				if (i != -1) {
					printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
				}
				else {
					printf("Contato desconhecido.\n");
				}
				
				printf("\n");
				break;
			
			case 4:
				printf("\n");
				
				if (tamanho < 32) {
					/* Ler os dados */
					printf("> Digite o nome: ");
					scanf("%s", nome);
					
					printf("> Digite o telefone: ");
					scanf("%s", &telefone);
					
					contato f;
					strcpy(f.nome, nome);
					strcpy(f.telefone, telefone);
					
					/* Registrar o contato */
					agenda[tamanho++] = f;
				}
				else {
					printf("Sem memoria.\n");
				}
				
				printf("\n");
				break;
			
			case 5:
				printf("\n");
				
				printf("Digite o nome do contato:\n");
				printf("> ");
				scanf("%s", nome);
				printf("\n");
				
				/* Procurar o contato na lista */
				i = busca(nome, agenda, tamanho);
				
				if (i != -1) {
					printf("Contato removido: %s\n", agenda[i].nome);
					
					for (j = i; j < (tamanho - 1); j++)
						agenda[j] = agenda[j + 1];
					tamanho--;
				}
				else {
					printf("Contato desconhecido.");
				}
				
				printf("\n");
				break;
			
			case 6:
				printf("\n");
				
				ptr = fopen("agenda.txt", "w");
				salvar(ptr, agenda, tamanho);
				fclose(ptr);
				
				printf("Lista de contatos salvada:\n");
				for (i = 0; i < tamanho; i++)
					printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
				
				printf("\n");
				break;
		}
	}
	
	return 0;
}