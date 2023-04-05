#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa capaz de obter do usu�rio a posi��o de um time de futebol na tabela de
//classifica��o do campeonato brasileiro. Conforme a classifica��o imprima a mensagem
//correspondente.

int main(int argc, char *argv[]) {
	
	//Declara a variavel
	int pos;
	
	//Pede o numero da posi��o ao usuario
	printf("Qual a posicao do time?\n");
	scanf("%d", &pos);
	
	//Mostra a qualifica��o de acordo com a posi��o
	if (pos >= 1 && pos <= 4){
		printf("Fase de grupos da copa libertadores.");
	}
	else if (pos >= 5 && pos <= 6){
		printf("Qualificatorias para copa libertadores.");
	}	
	else if (pos >= 7 && pos <= 12){
		printf("Sul americana.");
	}	
	else if (pos >= 13 && pos <= 16){
		printf("Permanece na 1� divisao.");
	}
	else if (pos >= 17 && pos <= 20){
		printf("Rebaixado para 2� divisao.");
	}
	else{
		printf("Classificacao invalida.");
	}		
	return 0;
}
