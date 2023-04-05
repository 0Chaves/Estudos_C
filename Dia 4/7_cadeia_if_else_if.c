#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Declara as variaveis
	int option_1, option_2, option_3;
	
	//Pede a primeira opção ao usuario
	printf("Escolha uma opcao:\n1 - vertebrado\n2 - invertebrado\n");
	scanf("%d", &option_1);
	
	//De acordo com a primeira opção, pede a segunda e então a terceira opção. Enfim, mostra o resultado da escolha.
	if (option_1 == 1){
		printf("Escolha uma opcao:\n1 - ave\n2 - mamifero\n");
		scanf("%d", &option_2);
		if (option_2 == 1){
			printf("Escolha uma opcao:\n1 - carnivoro\n2 - onivoro\n");
			scanf("%d", &option_3);
			if (option_3 == 1){
				printf("Voce escolheu aguia;");
			}
			else if (option_3 == 2){
				printf("Voce escolheu pomba");
			}
		}
		else if (option_2 == 2){
			printf("Escolha uma opcao:\n3 - onivoro\n4 - herbivoro\n");
			scanf("%d", &option_3);
			if (option_3 == 3){
				printf("Voce escolheu homem");
			}
			else if (option_3 == 4){
				printf("Voce escolheu vaca");
			}
		}	
	}
	
	else if (option_1 == 2){
		printf("Escolha uma opcao:\n3 - inseto\n4 - anelideo\n");
		scanf("%d", &option_2);
		if (option_2 == 3){
			printf("Escolha uma opcao:\n5 - hematofago\n6 - herbivoro\n");
			scanf("%d", &option_3);
			if (option_3 == 5){
				printf("Voce escolheu pulga");
			}
			else if (option_3 == 6){
				printf("Voce escolheu lagarta");
			}
		}
		else if (option_2 == 4){
			printf("Escolha uma opcao:\n7 - hematofago\n8 - onivoro\n");
			scanf("%d", &option_3);
			if (option_3 == 7){
				printf("Voce escolheu sanguessuga");
			}
			else if (option_3 == 8){
				printf("Voce escolheu minhoca");
			}
		}		
	}
	
	//Mensagem de erro caso o primeiro valor seja incorreto
	else
		printf("Valor inexistente.");
	return 0;
}
