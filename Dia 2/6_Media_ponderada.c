#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Define as variaveis
	float nota1, nota2, nota_final;

//Pede os valores ao usuario	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

//Realiza o calculo da nota final	
	nota_final = (4*nota1+6*nota2)/10;
	
//Envia o resultado	
	printf("A sua nota final e: %.1f", nota_final);
	return 0;
}
