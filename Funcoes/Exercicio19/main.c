#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Nomes.h"
int Menu(int *opcao){
	printf("\n\nMenu:\n");
	printf("0-Sair\n");
	printf("1-Listar nomes\n");
	printf("2-Cadastrar nome\n");
	printf("3-Apagar pelo nome\n");
	printf("4-Apagar pelo indice\n\n");
	scanf("%d", opcao);
};

int main(int argc, char *argv[]) {
	int menu = 0;
	char nome[TAM];
	int indice;
	do{
		Menu(&menu);
		switch(menu){
			case 0:{
				return 0;
				break;
			}
			case 1:{
				for(int i = 0; i<QuantidadeNomes(); i++){
					printf("%s \n", obterNomePeloIndice(i));
				}
				break;
			}
			case 2:{
				printf("Digite o nome do cadastro: \n");
				fflush(stdin);
				gets(nome);
				if(salvarNome(nome)){
					printf("Nome salvo com sucesso!\n");
				}
				else{
					printf("Falha ao salvar!\n");
				}
				break;
			}
			case 3:{
				printf("Digite o nome: ");
				fflush(stdin);
				gets(nome);
				if(ApagarPeloNome(nome)){
					printf("Operação realizada com sucesso!\n");
				}
				else{
					printf("Operação não realizada!\n");
				}
				break;
			}
			case 4:{
				printf("Digite o indice: ");
				scanf("%d", &indice);
				if(ApagarPeloIndice(indice)){
					printf("Operação realizada com sucesso!\n");
				}
				else{
					printf("Operação não realizada!\n");
				}
				break;
			}
		}
	}while(1);
	return 0;
}
