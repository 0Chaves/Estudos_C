#include <stdio.h>
#include <stdlib.h>

//Faça um programa capaz de obter do usuário 3 notas de um aluno. Calcule a média dessas 3 notas.
//Com esse valor, imprima na tela a situação do aluno conforme os seguintes critérios
//média >= 7, aprovado
//3 <= média < 7, recuperação
//média < 3, reprovado

int main(int argc, char *argv[]) {
	
	//Declara as variaveis
	float media, nota[3];
	
	//Pede as notas ao usuario
	printf("Digite a primeira nota: ");
	scanf("%f", &nota[0]);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota[1]);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota[2]);
	
	//Calcula a media
	media = (nota[0]+nota[1]+nota[2])/3;
	
	//Mostra o resultado de acordo com a media
	if (media >= 7){
		printf("Media = %.2f : aprovado", media);
	}
	else if (media >= 3 && media < 7){
		printf("Media = %.2f : recuperacao", media);
	}
	else{
		printf("Media = %.2f : reprovado");
	}
	return 0;
}
