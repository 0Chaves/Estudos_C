#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa na linguagem C que imprime na tela em sequ�ncia todos os n�meros de -10 � -100. */

int main(int argc, char *argv[]) {
	system("pause");
	for (int i=-10; i >= -100; i--){
		printf("%d\n", i);
	}
	return 0;
}
