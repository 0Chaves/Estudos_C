#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C que imprime na tela em sequência todos os números pares de 1 a 5000.*/

int main(int argc, char *argv[]) {
	system("pause"); //precisa disso pra não bugar no w11
	for(int i=1; i <= 2500; i++){
		printf("%d\n", i*2);
	}
	
//	for(int i=1; i <= 5000; i++){
//		if ( i%2 == 0){
//			printf("%d\n", i);
//		}
//	}
	return 0;
}
