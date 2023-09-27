#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

void media_e_desvio(float *notas, int tamanho, float *media, float *desvio_padrao);

int main(int argc, char *argv[]) {
	float notas[] = {10.0, 7.0, 5.0, 2.0};
	int tamanho = sizeof(notas)/sizeof(float);
	float media, desvio;
	
	media_e_desvio(notas, tamanho, &media, &desvio);
	
	printf("%f\n", media);
	printf("%f", desvio);
	return 0;
}

void media_e_desvio(float *notas, int tamanho, float *media, float *desvio_padrao){
	//Calculo da media
	float soma_das_notas = 0.0;
	for(int i=0; i<tamanho; i++){
		soma_das_notas += notas[i];
	}
	*media = soma_das_notas/tamanho;
	
	//Calculo do desvio padrao
	float somatorio = 0.0;
	for(int i=0; i<tamanho; i++){
		somatorio += (notas[i]-*media)*(notas[i]-*media);
	}
	somatorio /= tamanho;
	*desvio_padrao = pow(somatorio, 0.5);
	
}
