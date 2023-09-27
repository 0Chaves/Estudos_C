#include <stdio.h>
#include <stdlib.h>

struct st_produto{
	char nome[30];
	float preco;
	float custo;
	int quantidade_vendida = 0;
	int quantidade_estoque;
};

typedef struct st_produto Produto;

Produto novo(){
	Produto novo;
	printf("Digite o nome do produto: ");
	scanf("%s", novo.nome);
	printf("Digite o preco: ");
	scanf("%f", &novo.preco);
	printf("Digite o custo: ");
	scanf("%f", &novo.custo);
	Printf("Digite a quantidade em estoque: ");
	scanf("%d", &novo.quantidade_estoque);
	return novo;
};


int main(int argc, char *argv[]) {
	Produto produto1;
	int qtd;
	produto1 = novo();
	
	printf("Digite a quantidade a ser vendida: ");
	scanf("%d", &qtd);
	if(produto1.quantidade_estoque >= qtd){
		produto1.quantidade_estoque -= qtd;
		produto1.quantidade_vendida += qtd;
	};
	else{
		printf("Quantidade em falta.\n");
		printf("Em estoque: %d\n", produto1.quantidade_estoque);
	};
	
	
	return 0;
}
