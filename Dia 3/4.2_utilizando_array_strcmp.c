#include <stdio.h>
#include <stdlib.h>

//6. Escreva um programa na linguagem C, capaz de vender um único produto do catálogo da loja. Portanto,
//leia do usuário o código e a quantidade do produto. Para tal, utilize a tabela abaixo. Mostre o nome do
//produto e o valor total a ser cobrado do cliente (multiplique o preço pela quantidade).

int main(int argc, char *argv[]) {
	
	//Declara as variaveis e define o preço a pagar em 0
	char codigo[5];
	int quantidade;
	float preco = 0;
	
	
	//Pede o codigo do produto e a quantidade
	printf("Qual o codigo do produto?\n");
	scanf("%s", &codigo);
	printf("Qual a quantidade?\n");
	scanf("%d", &quantidade);
	
	//Mostra o valor final do produto, segundo seu código e quantidade
	if (strcmp(codigo, "1001") == 0){
		preco += 6.20*quantidade;
		printf("Laranja\n");
		printf("Valor a pagar: %.2f", preco);
	}
	else if (strcmp(codigo, "1002") == 0){
		preco += 8.90*quantidade;
		printf("Maca\n");
		printf("Valor a pagar: %.2f", preco);
	}
	else if (strcmp(codigo, "1003") == 0){
		preco += 2.50*quantidade;
		printf("Bergamota\n");
		printf("Valor a pagar: %.2f", preco);
	}
	else{
		preco += 3.50*quantidade;
		printf("Cebola\n");
		printf("Valor a pagar: %.2f", preco);
	}
	return 0;
}
