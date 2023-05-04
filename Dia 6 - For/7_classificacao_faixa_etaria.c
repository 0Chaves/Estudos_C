#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa na linguagem C que leia a idade de 10 pessoas. Calcule quantos s�o idosos, quantos s�o
adultos e quantos s�o menores de idade. Depois mostre na tela o quantitativo de cada idade. Abaixo �
apresentada a classifica��o por idade que voc� deve utilizar Classifica��o Faixa et�ria
Idoso 60 ou mais anos
Adulto 18 at� 59
Menor 0 at� 17 */

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
