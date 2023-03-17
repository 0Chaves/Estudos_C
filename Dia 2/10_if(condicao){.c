#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Define as variaveis
	int a, b;

//Pede os valores ao usuario
	printf("Digite o primeiro numero:");
	scanf("%d", &a);
	printf("\nDigite o segundo numero:");
	scanf("%d", &b);
	
//Verifica se se algum numero é maior, ou se são iguais	
	if (a>b){
	printf("\nO primeiro numero e o maior");
	}
	if (b>a){
	printf("\nO segundo numero e o maior");
	}
	if (a==b){
	printf("\nOs numeros sao iguais");
	}
	return 0;
}
