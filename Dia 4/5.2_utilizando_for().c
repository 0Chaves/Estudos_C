#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Declara as variáveis
	int num[5], pares = 0, impares = 0, negativos = 0, positivos = 0;
	
	//Pede os números ao usuário
	printf("Digite o primeiro numero: ");
	scanf("%d", &num[0]);
	printf("Digite o segundo numero: ");
	scanf("%d", &num[1]);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num[2]);
	printf("Digite o quarto numero: ");
	scanf("%d", &num[3]);
	printf("Digite o quinto numero: ");
	scanf("%d", &num[4]);

	//Realiza a contagem de pares, ímpares, positivos e negativos
	for (int x = 0; x < 5; x++){
		if (num[x]%2 == 0){
			pares++;
		}
		else{
			impares++;
		}
		if (num[x]>0){
			positivos++;
		}
		else{
			negativos++;
		}
	}

	//Mostra quantos números são pares, quantos são ímpares, quantos são positivos e quantos são negativos
	printf("%d impares\n", impares);
	printf("%d pares\n", pares);
		
	printf("%d positivos.\n", positivos);
	printf("%d negativos.", negativos);
	

	return 0;
}
