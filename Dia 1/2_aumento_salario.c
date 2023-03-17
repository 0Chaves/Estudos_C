#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Declara as variaveis
float salario, aumento;
aumento = 252.35;

//pede os valores ao usuario
printf("Digite a quantidade de seu salario:R$ ");
scanf("%f", &salario);


//realiza as operações e mostra o resultado
salario += aumento;
printf("O seu novo salario e R$%.2f, com o aumento de R$%.2f", salario, aumento);

	return 0;
}
