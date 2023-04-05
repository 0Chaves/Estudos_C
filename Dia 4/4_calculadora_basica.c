#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que obtenha dois valores inteiros. Depois pergunte qual opera��o o
//usu�rio deseja realizar. Para isso, utilize o c�digo num�rico da opera��o conforme menu
//abaixo.
//MENU
//1 � soma
//2 � subtra��o
//3 � multiplica��o
//4 � divis�o
//Ao final, realize a opera��o solicitada pelo usu�rio e apresente o resultado na tela.

int main(int argc, char *argv[]) {
	
	//Declara as variaveis 
	int num[2], opcao, soma, sub, mult;
	float div;
	
	//Pergunta ao usuario qual opera��o ser� feita
	printf("Digite o numero da operacao desejada:\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
	scanf("%d", &opcao);
	
	//Mensagem de erro para op��es invalidas
	if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4){
		printf("Opcao invalida.");
		return 0;
	}
	
	//Pede os numeros que ser�o utilizados na opera��o
	printf("Digite o primeiro numero: ");
	scanf("%d", &num[0]);
	printf("Digite o segundo numero: ");
	scanf("%d", &num[1]);
	
	//Realiza as opera��es matematicas
	soma = num[0] + num[1]; 
	sub = num[0] - num[1];
	mult = num[0] * num[1];
	div = (float)num[0]/num[1];
	
	//Mostra o resultado de acordo com a op��o escolhida
	if (opcao == 1){
		printf("%d", soma);
	}
	else if (opcao == 2){
		printf("%d", sub);
	}
	else if (opcao == 3){
		printf("%d", mult);
	}
	else if (opcao == 4){
		printf("%.2f", div);
	}
			
	return 0;
}
