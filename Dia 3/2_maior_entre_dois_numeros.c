#include <stdio.h>
#include <stdlib.h>

//4. Faça um programa na linguagem C, para ler 2 valores (considere que não serão informados valores iguais)
//e escreva o maior deles.

int main(int argc, char *argv[]) {
	
	//Declara as variaveis
	int num1, num2;
	
	//Pede os valores ao usuario
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	//Mostra qual dos numeros é o maior
	if (num1 > num2){
		printf("%d e maior que %d", num1, num2);
	}
	else if (num2 > num1){
		printf("%d e maior que %d", num2, num1);
	}
	return 0;
}
