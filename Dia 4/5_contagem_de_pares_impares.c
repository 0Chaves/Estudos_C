#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//Declara as variaveis e inicia a contagem em 0
	int num[5], pares = 0, impares = 0, negativos = 0, positivos = 0;
	
	//Pede os numeros ao usuario
	printf("Digite o primeiro numero: ");
	scanf("%d", &num[0]);
	printf("Digite o segundo numero: ");
	scanf("%d", &num[1]);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num[2]);
	printf("Digite o quarto numero: ");
	scanf("%d", &num[3]);
	printf("Digite o quinto numero: ");
	scanf("%d", &num[4]);
	
	//Checa se os números são pares ou impares, e incrementa a variavel referente para contagem
	if (num[0]%2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	if (num[1]%2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	if (num[2]%2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	if (num[3]%2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	if (num[4]%2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	
	//Mostra quantos numeros são pares e quantos são ímpares
	printf("%d impares\n", impares);
	printf("%d pares\n", pares);
	
	//Checa se os números são positivos ou negativos, e incrementa a variavel referente para contagem
	if (num[0]>0){
		positivos++;
	}
	else{
		negativos++;
	}
	if (num[1]>0){
		positivos++;
	}
	else{
		negativos++;
	}	
	if (num[2]>0){
		positivos++;
	}
	else{
		negativos++;
	}	
	if (num[3]>0){
		positivos++;
	}
	else{
		negativos++;
	}	
	if (num[4]>0){
		positivos++;
	}
	else{
		negativos++;
	}	
	
	//Mostra quantos números são positivos e quantos são negativos
	printf("%d positivos.\n", positivos);
	printf("%d negativos.", negativos);
	

	return 0;
}
