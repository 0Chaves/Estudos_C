#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Define as variaveis
	float a, b, c, multiplicacao;
	
//Pede os valores ao usuario
	printf("Digite o primeiro numero decimal: ");
	scanf("%f", &a);
	printf("Digite o segundo numero decimal: ");
	scanf("%f", &b);
	printf("Digite o terceiro numero decimal: ");
	scanf("%f", &c);

//Realiza o calculo
	multiplicacao = a*b*c;
	
//Envia o resultado
	printf("O produto dos numeros digitados é %f", multiplicacao);
	return 0;
}
