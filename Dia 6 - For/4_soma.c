#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C que leia 10 números e imprima a soma deles.  */

int main(int argc, char *argv[]) {
	int num[10], resultado = 0;
	
	for (int i=0; i < 10; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
		resultado += num[i];
	}
	printf("Resultado: %d", resultado);
	return 0;
}
