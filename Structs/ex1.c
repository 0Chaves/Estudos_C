#include <stdio.h>
#include <stdlib.h>

struct st_carro{
	char nome[30];
	float preco;
	int potencia;
};

typedef struct st_carro Carro;

Carro registrar (){
	Carro novo;
	printf("Digite o nome do carro: ");
	scanf("%s", novo.nome);
	printf("Digite o preco: ");
	scanf("%f", &novo.preco);
	printf("Digite a potencia: ");
	scanf("%d", &novo.potencia);
	return novo;
};

int main(int argc, char *argv[]) {
	
	Carro carro1;
	carro1 = registrar();
	

	printf("\n\n");
	printf("Carro: %s\n", carro1.nome);
	printf("Preco: %.2f\n", carro1.preco);
	printf("Potencia: %d\n", carro1.potencia);
	
	return 0;
}
