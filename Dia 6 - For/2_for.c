#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C que imprime na tela em sequência todos os números de -10 à -100. */

int main(int argc, char *argv[]) {
	system("pause");
	for (int i=-10; i >= -100; i--){
		printf("%d\n", i);
	}
	return 0;
}
