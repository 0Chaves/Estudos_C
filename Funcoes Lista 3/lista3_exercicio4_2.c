#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int vogais (char *string);

int main(int argc, char *argv[]) {
	char array[100];
	
	printf("Digite uma frase: ");
	fgets(array, 100, stdin);
	printf("Existem %d vogais nesta frase.", vogais(array));	
	return 0;
}

int vogais (char *string){
	char vogais[] = {'a', 'e', 'i', 'o', 'u'};
	int contagem = 0;
	int tamanho = strlen(string);
	
	for(int i=0; i<tamanho; i++){
		for (int j=0; j<5; j++){
			if(string[i] == vogais[j]){
				contagem++;
			}			
		}
	}
	return contagem;
}
