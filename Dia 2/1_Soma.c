#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, soma;
	
	printf("Soma de dois numeros inteiros.\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	printf("Digite outro numero inteiro: ");
	scanf("%d", &b);
	
	soma = a+b;
	
	printf("A soma desses dois numeros e %d.", soma);
	
	return 0;
}
