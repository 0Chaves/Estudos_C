#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C que leia a idade de 10 pessoas. Calcule quantos são idosos, quantos são
adultos e quantos são menores de idade. Depois mostre na tela o quantitativo de cada idade. Abaixo é
apresentada a classificação por idade que você deve utilizar Classificação Faixa etária
Idoso 60 ou mais anos
Adulto 18 até 59
Menor 0 até 17 */

int main(int argc, char *argv[]) {
	int idade, idoso=0, adulto=0, Dmenor=0;
	
	for(int i=0; i<10; i++){
		printf("Digite a idade da %d pessoa: ", i+1);
		scanf("%d", &idade);
		if (idade >= 60){
			idoso++;
		}
		else if (idade >= 18 && idade <= 59){
			adulto++;
		}
		else if (idade>=0 && idade <= 17){
			Dmenor++;
		}
	}
	printf("Sao %d idosos, %d adultos, %d menores de idade.", idoso, adulto, Dmenor);
	return 0;
}
