#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Define as variaveis
	float rendimento, imposto, ali;
	
	//Pede o rendimento ao usuario
	printf("Qual seu rendimento anual?\n");
	scanf("%f", &rendimento);
	
	//De acordo com o valor do rendimento, define o valor da aliquota, realiza o calculo do imposto e mostra o resultado
	if (rendimento <= 22847.76){
		printf("Voce e isento de imposto");
	}
	else if (rendimento >= 22847.77 && rendimento <= 33919.80){
		ali = 0.075;
		imposto = rendimento*ali;
		printf("Sua aliquota e de 7,5%%\n");
		printf("Voce deve pagar %.2f R$ de imposto", imposto);
	}
	else if (rendimento >= 33919.81 && rendimento <= 45012.60){
		ali = 0.15;
		imposto = rendimento*ali;
		printf("Sua aliquota e de 15%%\n");
		printf("Voce deve pagar %.2f R$ de imposto", imposto);	
	}
	else if (rendimento >= 45012.61 && rendimento <= 55976.16){
		ali = 0.225;
		imposto = rendimento*ali;
		printf("Sua aliquota e de 22,5%%\n");
		printf("Voce deve pagar %.2f R$ de imposto", imposto);	
	}
	else{
		ali = 0.275;
		imposto = rendimento*ali;
		printf("Sua aliquota e de 27,5%%\n");
		printf("Voce deve pagar %.2f R$ de imposto", imposto);	
	}
	return 0;
}
