#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Define as variaveis
	float R, area;
	
//Pede o valor do raio ao usuario
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &R);

//Realiza o calculo da area
	area = 3.14159 * pow(R, 2);

//Envia o resultado	
	printf("A area da circunferencia e: %.2f", area);
	return 0;
}
