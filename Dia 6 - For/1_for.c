#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa na linguagem C, capaz de imprimir na tela em sequ�ncia todos os n�meros de 1 a 5000

int main(int argc, char *argv[]) {
	system("pause");
	int i=0;
	for (i=0; i<5000; i++){
		printf("%d\n", i+1);
	}
	return 0;
}
