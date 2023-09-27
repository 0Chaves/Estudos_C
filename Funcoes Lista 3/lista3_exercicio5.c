#include <stdio.h>
#include <stdlib.h>

void x10 (float *numeros){
//	int tamanho = sizeof(numeros)/sizeof(float);
	int tamanho = 7;
	
	for(int i=0; i<tamanho; i++){
		numeros[i] = numeros[i]*10;
	}
	for(int i=0; i<tamanho; i++){
		printf("%f\n", numeros[i]);
	}
}

int main(int argc, char *argv[]) {
	float numeros[] = {1.0, 0.5, 0.34, 0.13, 0.11, 12.2, 12.25};
	x10(numeros);
	
	return 0;
}


