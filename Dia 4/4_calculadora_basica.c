#include <stdio.h>
#include <stdlib.h>

//Faça um programa que obtenha dois valores inteiros. Depois pergunte qual operação o
//usuário deseja realizar. Para isso, utilize o código numérico da operação conforme menu
//abaixo.
//MENU
//1 – soma
//2 – subtração
//3 – multiplicação
//4 – divisão
//Ao final, realize a operação solicitada pelo usuário e apresente o resultado na tela.

int main(int argc, char *argv[]) {
	
	//Declara as variaveis 
	int num[2], opcao, soma, sub, mult;
	float div;
	
	//Pergunta ao usuario qual operação será feita
	printf("Digite o numero da operacao desejada:\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
	scanf("%d", &opcao);
	
	//Mensagem de erro para opções invalidas
	if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4){
		printf("Opcao invalida.");
		return 0;
	}
	
	//Pede os numeros que serão utilizados na operação
	printf("Digite o primeiro numero: ");
	scanf("%d", &num[0]);
	printf("Digite o segundo numero: ");
	scanf("%d", &num[1]);
	
	//Realiza as operações matematicas
	soma = num[0] + num[1]; 
	sub = num[0] - num[1];
	mult = num[0] * num[1];
	div = (float)num[0]/num[1];
	
	//Mostra o resultado de acordo com a opção escolhida
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
