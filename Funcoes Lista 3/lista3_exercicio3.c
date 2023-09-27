#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int ocorrencias (char letra, char *string);



int main(int argc, char *argv[]) {
	char letra;
	char string[100];
	
	printf("Digite uma frase: ");
	fgets(string, 100, stdin);
	printf("Escolha uma letra para contar suas ocorrencias na frase: ");
	scanf(" %c", &letra);
	printf("A letra %c ocorre %d vezes na frase.", letra, ocorrencias(letra, string));
	
	return 0;
}





int ocorrencias (char letra, char *string){
	int ocorrencias = 0;
	int tamanho_string = strlen(string);
	
	for (int i=0; i<tamanho_string; i++){
		if(letra == string[i]){
			ocorrencias++;
		}
	}
	return ocorrencias;
}
