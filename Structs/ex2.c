#include <stdio.h>
#include <stdlib.h>

struct st_retangulo{
	float largura, altura, area, perimetro;
};

typedef struct st_retangulo Retangulo;

Retangulo novo(){
	Retangulo novo;
	printf("Digite a largura: ");
	scanf("%f", &novo.largura);
	printf("Digite a altura: ");
	scanf("%f", &novo.altura);
	novo.area = novo.largura * novo.altura;
	novo.perimetro = 2*novo.largura + 2*novo.altura;
	return novo;
}

int main(int argc, char *argv[]) {
	
	Retangulo retangulo;
	retangulo = novo();
	
	printf("\n\n");
	printf("Largura: %.2f\n", retangulo.largura);
	printf("Altura: %.2f\n", retangulo.altura);
	printf("Area: %.2f\n", retangulo.area);
	printf("Perimetro: %.2f", retangulo.perimetro);
	
	return 0;
}
