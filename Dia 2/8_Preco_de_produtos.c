#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Define as variaveis
	int quantidade1, quantidade2, quantidade3; 
	float produto1, produto2, produto3;

//Pede as informações ao usuario e guarda nas variaveis	
	printf("Digite a quantidade do produto 1 e depois seu preco:\n");
	scanf("%d", &quantidade1);
	scanf("%f", &produto1);
	
	printf("Digite a quantidade do produto 2 e depois seu preco:\n");
	scanf("%d", &quantidade2);
	scanf("%f", &produto2);
	
	printf("Digite a quantidade do produto 3 e depois seu preco:\n");
	scanf("%d", &quantidade3);
	scanf("%f", &produto3);

//Define as variaveis do total gasto por produto e também total gasto no geral	
	float total_1, total_2, total_3, total_geral;
	
//Realiza os calculos
	total_1 = quantidade1 * produto1;
	total_2 = quantidade2 * produto2;
	total_3 = quantidade3 * produto3;
	total_geral = total_1 + total_2 + total_3;

//Envia os resultados	
	printf("Total produto 1: %.2f R$ \n", total_1);
	printf("Total produto 2: %.2f R$ \n", total_2);
	printf("Total produto 3: %.2f R$ \n", total_3);
	printf("Total da compra: %.2f R$", total_geral);
		
	return 0;
}
