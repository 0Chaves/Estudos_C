#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C que imprima na tela a tabuada de um número lido */

int main(int argc, char *argv[]) {
	int v;
	
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d", &v);
	
	printf("Tabuada do %d\n", v);
	
	for (int i=0; i < 10; i++){
		printf("%d\n", v*(i+1));
	}
	return 0;
}
