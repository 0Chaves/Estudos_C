#include <stdio.h>
#include <stdlib.h>

/* . Faça um programa na linguagem C que lê 10 valores inteiros, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação. */

int main(int argc, char *argv[]) {
	int valor, contagem = 0;
	
	for (int i=0; i < 10; i++){
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &valor);
		if (valor < 0){
			contagem++;
		}
	}
	printf("Sao %d valores negativos", contagem);
	return 0;
}
