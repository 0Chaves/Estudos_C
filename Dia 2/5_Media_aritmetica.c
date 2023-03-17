#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Declara variaveis
	float p1, p2, p3, media;
	
//Pede os valores ao usuario
	printf("Digite o peso da primeira pessoa em kg: ");
	scanf("%f", &p1);
	printf("Digite o peso da segunda pessoa em kg: ");
	scanf("%f", &p2);
	printf("Digite o peso da tericeira pessoa em kg: ");
	scanf("%f", &p3);
	
//realiza o calculo da media
	media = (p1+p2+p3)/3;
	
//mostra o resultado
	printf("A media dos pesos e: %.2f", media);
	return 0;
}
