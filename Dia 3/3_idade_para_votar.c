#include <stdio.h>
#include <stdlib.h>

//5. Faça um programa na linguagem C, para ler a idade de uma pessoa. Informe se a pessoa já possui idade
//para votar, ou seja, se tem pelo menos 16 anos, mostrar a mensagem “Poderá votar”. Caso tenha menos
//de 16 anos, o programa deve mostrar a mensagem “Aguarde até os 16 anos”.

int main(int argc, char *argv[]) {
	
	//Declara a variavel
	int idade;
	
	//Pede o valor ao usuario
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	
	//Diz se está apto a votar ou não
	if (idade >= 16){
		printf("Podera votar.");
	}
	else{
		printf("Aguarde ate os 16 anos.");
	}
	
	return 0;
}
