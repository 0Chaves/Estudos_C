#include <stdio.h>
#include <stdlib.h>

void mediana_e_moda (int *inteiros, int tamanho, int *mediana, int *moda);

int main(int argc, char *argv[]) {
	
	int inteiros[] = {1,4,5,7,2,4,6,1,6,7,3,1,2,4,6,8,9,2,2,2,1,3};
	int tamanho = sizeof(inteiros)/sizeof(int);
	int mediana, moda;
	

	mediana_e_moda(inteiros, tamanho, &mediana, &moda);
	for(int i=0; i<tamanho; i++){
		printf("%d\n", inteiros[i]);
	}
	printf("Tamanho = %d\n", tamanho);	
	printf("Mediana = %d\n", mediana);
	printf("Moda = %d", moda);
	
	return 0;
}

void mediana_e_moda (int *inteiros, int tamanho, int *mediana, int *moda){

	//organiza os numeros em ordem crescente
	for(int i=0; i<tamanho; i++){
		for(int j=0; j<tamanho-i-1; j++){
			if(inteiros[j] > inteiros[j+1]){
				int temp = inteiros[j];
				inteiros[j] = inteiros[j+1];
				inteiros[j+1] = temp;
			}
		}
	}
		
	//Calculo da mediana
	if(tamanho%2 == 1){
		tamanho--;
		tamanho /= 2;
		tamanho++;
		*mediana = inteiros[tamanho];
	}
	else{
		tamanho /= 2;
		*mediana = (inteiros[tamanho] + inteiros[tamanho+1])/2;
	}

	//Calculo da moda
	int algarismos[]={0,1,2,3,4,5,6,7,8,9}, valor_mais_alto, frequencia[10]={0,0,0,0,0,0,0,0,0,0};
	int temp = 0;
	for(int i=0; i<10; i++){
		for(int j=0; j<tamanho; j++){
			if(algarismos[i] == inteiros[j]){
				frequencia[i]++;
			}
		}
	};
	valor_mais_alto = inteiros[0];
	for(int i=0;i<9;i++){
		if(frequencia[i]<frequencia[i+1]){
			valor_mais_alto=algarismos[i+1];
		}
	};
	
	*moda = valor_mais_alto;
	

}
