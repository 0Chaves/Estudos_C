#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declara as variaveis
	int a, b, sub, quad, cubo;
	float div_a_b, div_b_a;
	
	//Pede os valores ao usuario
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	//Realiza os cáclulos
	sub = a - b;
	div_a_b = a/b;
	div_b_a = b/a;
	quad = pow(a,2);
	cubo = pow(b,3);
	
	//Mostra os resultados
	printf("O primeiro menos o segundo e: %d\n", sub);	
	printf("O primeiro divido pelo segundo e: %f\n", div_a_b);	
	printf("O segundo divido pelo primeiro e: %f\n", div_b_a);	
	printf("O primeiro elevado ao quadrado e: %d\n", quad);	
	printf("O segundo elevado ao cubo e: %d", cubo);		
	return 0;
}
