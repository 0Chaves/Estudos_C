#include <stdio.h>
#include <stdlib.h>

//Faça um programa na linguagem de programação C capaz de ler do usuário a idade de um nadador.
//Então classifique-o em uma das seguintes categorias. Ao final, mostre na tela a idade e a categoria
//digitada pelo usuário.
//Infantil A = 5 a 7 anos
//Infantil B = 8 a 10 anos
//Juvenil A = 11 a 13 anos
//Juvenil B = 14 a 17 anos
//Adulto = maiores de 18 anos

int main(int argc, char *argv[]) {
	
	//Declara as variaveis
	int idade;
	char categoria[100];
	
	//Pede a idade ao usuario
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	
	//Aloca a string com as informações sobre a categoria de acordo com a idade
	if (idade >= 5 && idade <= 7){
		strcpy(categoria, "Infantil A = 5 a 7 anos");
	} 
	else if (idade >= 8 && idade <= 10){
		strcpy(categoria, "Infantil B = 8 a 10 anos");
	}
	else if (idade >= 11 && idade <= 13){
		strcpy(categoria, "Juvenil A = 11 a 13 anos");
	}
	else if (idade >= 14 && idade <= 17){
		strcpy(categoria, "Juvenil B = 14 a 17 anos");
	}	
	else if  (idade >= 18){
		strcpy(categoria, "Adulto = maiores de 18 anos");
	}
	
	//Mostra o resultado
	printf("Com %d anos voce esta dentro da categoria %s", idade, categoria);
	return 0;
}
