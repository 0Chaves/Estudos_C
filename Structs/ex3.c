#include <stdio.h>
#include <stdlib.h>


struct st_atleta{
	char nome[30];
	char esporte[30];
	int idade;
	float altura;
};

typedef struct st_atleta Atleta;

Atleta novoAtleta(){
	Atleta novo;
	printf("Digite o nome: ");
	scanf(" %[^\n]", novo.nome);
	printf("Digite o esporte: ");
	scanf(" %[^\n]", novo.esporte);
	printf("Digite a idade: ");
	scanf("%d", &novo.idade);
	printf("Digite a altura: ");
	scanf("%f", &novo.altura);
	printf("\n\n");
	return novo;
}

//void MaiorEMaisVelho(){
//	
//}

int main(int argc, char *argv[]) {
	Atleta atleta[6];
	for (int i = 0; i<6; i++){
		atleta[i] = novoAtleta();
	};
	int temp = 0;
	int temp1 = 0;
	for (int i=0; i<5; i++){
		if(atleta[i+1].idade > atleta[i].idade){
			temp = i+1;
		}
	}
	for (int i=0; i<5; i++){
		if(atleta[i+1].altura > atleta[i].altura){
			temp1 = i+1;
		}
	}
	printf("%s é o atleta mais velho com %d anos\n", atleta[temp].nome, atleta[temp].idade);
	printf("%s é o atleta mais alto com %.2f de altura", atleta[temp1].nome, atleta[temp1].altura);
	return 0;
}
