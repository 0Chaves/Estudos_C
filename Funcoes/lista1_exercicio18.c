#include <stdio.h>
#include <stdlib.h>

void maiorElementoVetor (int *vetor, int size, int *elemento, int *ocorrencias){
	*elemento = vetor[0];
	*ocorrencias = 1;
	for (int i=1; i<size; i++){
		if (vetor[i] == *elemento){
			(*ocorrencias)++;
		}
		else if (vetor[i] > *elemento){
			*elemento = vetor[i];
			*ocorrencias = 1;
		}
	}
}

int main(int argc, char *argv[]) {
	int maior_elemento, ocorrencias;
	int vetor[] = {1,1,2,4,5,7,7,7};
	int tamanho_vetor = sizeof(vetor)/sizeof(int);
	maiorElementoVetor(vetor, tamanho_vetor, &maior_elemento, &ocorrencias);
	
	printf("Maior elemento: %d\n", maior_elemento);
	printf("Ocorrencias: %d", ocorrencias);
	return 0;
}
