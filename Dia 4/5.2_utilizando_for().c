#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Declara as vari�veis
	int num[5], pares = 0, impares = 0, negativos = 0, positivos = 0;
	
	//Pede os n�meros ao usu�rio
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

	//Realiza a contagem de pares, �mpares, positivos e negativos
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

	//Mostra quantos n�meros s�o pares, quantos s�o �mpares, quantos s�o positivos e quantos s�o negativos
	printf("%d impares\n", impares);
	printf("%d pares\n", pares);
		
	printf("%d positivos.\n", positivos);
	printf("%d negativos.", negativos);
	

	return 0;
}
