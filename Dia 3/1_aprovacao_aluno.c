#include <stdio.h>
#include <stdlib.h>

//3. Fa�a um programa na linguagem C, para ler as notas das duas avalia��es de um aluno no semestre,
//calcular e escrever a m�dia aritm�tica. Se a m�dia for maior ou igual a 7.0, imprimir a mensagem
//�APROVADO�. Se a m�dia for menor que 7.0 imprimir a mensagem �REPROVADO�.

int main(int argc, char *argv[]) {
	
	//Declara as variaveis
	float nota1, nota2, media;
	
	//Pede os valores ao aluno
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	//Realiza o calculo da media
	media = (nota1 + nota2) / 2;
	
	//Mostra se o aluno foi aprovado ou reprovado
	if (media >= 7){
		printf("\nAPROVADO");
	}
	else{
		printf("\nREPROVADO");
	}
	return 0;
}
