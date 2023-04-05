#include <stdio.h>
#include <stdlib.h>

//6. Escreva um programa na linguagem C, capaz de vender um �nico produto do cat�logo da loja. Portanto,
//leia do usu�rio o c�digo e a quantidade do produto. Para tal, utilize a tabela abaixo. Mostre o nome do
//produto e o valor total a ser cobrado do cliente (multiplique o pre�o pela quantidade).

int main(int argc, char *argv[]) {
	
	//Declara as variaveis e define o pre�o a pagar em 0
	int codigo;
	int quantidade;
	float preco = 0;
	
	//Pede o codigo do produto e a quantidade
	printf("Qual o codigo do produto?\n");
	scanf("%d", &codigo);
	printf("Qual a quantidade?\n");
	scanf("%d", &quantidade);
	
	//Mostra o valor final do produto, segundo seu c�digo e quantidade
	if (codigo == 1001){
		preco += 6.20*quantidade;
		printf("Laranja");
		printf("Valor a pagar: %.2f", preco);
	}
	else if (codigo == 1002){
		preco += 8.90*quantidade;
		printf("Ma�a");
		printf("Valor a pagar: %.2f", preco);
	}
	else if (codigo == 1003){
		preco += 2.50*quantidade;
		printf("Bergamota");
		printf("Valor a pagar: %.2f", preco);
	}
	else{
		preco += 3.50*quantidade;
		printf("Cebola");
		printf("Valor a pagar: %.2f", preco);
	}
	return 0;
}
