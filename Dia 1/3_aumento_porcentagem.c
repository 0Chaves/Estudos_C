#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Declara as variaveis
float salario, aumento, novo_salario;
aumento = 35;

//pede os valores ao usuario
printf("Digite o valor do salario do funcionario:R$ ");
scanf("%f", &salario);


//realiza as opera��es e mostra o resultado
novo_salario = salario + salario*(aumento/100);
printf("O novo salario e R$%.2f, com o aumento de %.0f por cento ", novo_salario, aumento);

	return 0;
}
