#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Declara as variaveis
int a, b, c, d, soma;

//Pede os valores ao usuario
printf("Soma de quatro numeros\n");
printf("\nDigite o primeiro numero: ");
scanf("%d", &a);
printf("\nDigite o segundo numero: ");
scanf("%d", &b);
printf("\nDigite o terceiro numero: ");
scanf("%d", &c);
printf("\nDigite o quarto numero: ");
scanf("%d", &d);

//realiza a soma
soma = a+b+c+d;

//mostra o resultado
printf("\nA soma e %d", soma);
	return 0;
}
