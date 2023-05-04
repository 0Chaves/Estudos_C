#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int horas, min, seg;
	char unidade;
	
	printf("Digite as horas: ");
	scanf("%d", &horas);
	printf("a conversao sera em 'm' minutos ou 's' segundos? ");
	scanf(" %c", &unidade);
//	fflush(stdin);
//	unidade = getchar();

	switch (unidade){
		case 'm':
		case 'M':{
			min = horas * 60;
			printf("%d horas e igual a %d minutos", horas, min);
			break;
		}
		case 's':
		case 'S':{
			seg = horas * 3600;
			printf("%d horas e igual a %d segundos", horas, seg);
			break;
		}
	}
	return 0;
}
