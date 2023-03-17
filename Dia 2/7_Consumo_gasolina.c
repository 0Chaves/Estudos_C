#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Define as variaveis
	float distancia, litros_gastos, consumo;
	
//Pede os valores ao usuario	
	printf("Qual foi a distancia percorrida em km?\n");
	scanf("%f",&distancia);
	printf("Quantos litros de gasolina foram gastos?\n");
	scanf("%f",&litros_gastos);

//Realiza o calculo do consumo	
	consumo = distancia/litros_gastos;
	
//Envia o resultado
	printf("O carro percorre %.2f km/l.", consumo);
	return 0;
}
