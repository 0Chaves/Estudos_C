#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Define as vari�veis
	int gorjeta, pessoas;
	float conta, valor_individual;
	
	//Pede os valores ao usu�rio
	printf("Qual o valor da conta?\n");
	scanf("%f", &conta);
	printf("A porcentagem da gorjeta ser� 10, 12 ou 15?\n");
	scanf("%d", &gorjeta);
	printf("Em quantas pessoas ser� divida a conta?\n");
	scanf("%d", &pessoas);
	
	//Realiza os c�lculos para obter o valor total da conta com gorjeta e o valor individual a pagar
	conta += conta*gorjeta/100;
	valor_individual = conta / pessoas;
	
	//Exibe o valor individual a pagar
	printf("Cada pessoa dever� pagar %.2f R$", valor_individual);
	
	return 0;
}
