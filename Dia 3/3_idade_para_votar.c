#include <stdio.h>
#include <stdlib.h>

//5. Fa�a um programa na linguagem C, para ler a idade de uma pessoa. Informe se a pessoa j� possui idade
//para votar, ou seja, se tem pelo menos 16 anos, mostrar a mensagem �Poder� votar�. Caso tenha menos
//de 16 anos, o programa deve mostrar a mensagem �Aguarde at� os 16 anos�.

int main(int argc, char *argv[]) {
	
	//Declara a variavel
	int idade;
	
	//Pede o valor ao usuario
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	
	//Diz se est� apto a votar ou n�o
	if (idade >= 16){
		printf("Podera votar.");
	}
	else{
		printf("Aguarde ate os 16 anos.");
	}
	
	return 0;
}
