#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Ferramenta de auxilio que mostrará quais notas devem ser utilizadas para das o troco de uma compra.
//Cria a variaveis troco e pede esta informação ao usuario
	int troco; 

	printf("Digite o valor do troco: R$ ");
	scanf("%d", &troco);

//Define as variaveis nota_x (quantas notas do valor x devem ser dadas) e sobrou_x (quanto ainda falta dar de troco após distribuir as notas_x)
	int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, moeda_1;
	int sobrou_100, sobrou_50, sobrou_20, sobrou_10, sobrou_5, sobrou_2;
	
	nota_100 = troco / 100;
	sobrou_100 = troco % 100;
	
	nota_50 = sobrou_100 / 50;
	sobrou_50 = sobrou_100 % 50;
	
	nota_20 = sobrou_50 / 20;
	sobrou_20 = sobrou_50 % 20;
	
	nota_10 = sobrou_20 / 10;
	sobrou_10 = sobrou_20 % 10;
	
	nota_5 = sobrou_10 / 5;
	sobrou_5 = sobrou_10 % 5;
	
	nota_2 = sobrou_5 / 2;
	sobrou_2 = sobrou_5 % 2;
	
	moeda_1 = sobrou_2;

//Envia os resultados	
	printf("%d nota(s) de R$100,00 \n", nota_100);
	printf("%d nota(s) de R$50,00 \n", nota_50);
	printf("%d nota(s) de R$20,00 \n", nota_20);
	printf("%d nota(s) de R$10,00 \n", nota_10);
	printf("%d nota(s) de R$5,00 \n", nota_5);
	printf("%d nota(s) de R$2,00 \n", nota_2);
	printf("%d moeda de R$1,00", moeda_1);
	return 0;
}
