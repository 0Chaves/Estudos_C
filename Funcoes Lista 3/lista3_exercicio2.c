#include <stdio.h>
#include <stdlib.h>

int menu (){
	int opcao;
	do{
		printf("MENU: ");
		printf("\n    0-Sair");
		printf("\n    1-Listar");
		printf("\n    2-Cadastrar");
		printf("\n    3-Excluir");
		printf("\n    4-Pesquisar\n");		
		scanf("%d", &opcao);
		if (opcao<0 || opcao>4){
			printf("Opcao invalida.\n");
		}
	}while(opcao<0 || opcao>4);
	return opcao;	
}

int main(int argc, char *argv[]) {
	printf("%d", menu());
	return 0;
}

