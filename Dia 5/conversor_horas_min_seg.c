#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int horas, min, seg;
	char unidade;
	
	printf("Digite as horas: ");
	scanf("%d", &horas);
	printf("a conversao sera em 'm' minutos ou 's' segundos? ");
	scanf(" %c", &unidade);
//	fflush(stdin);
//	unidade = getchar();
	
	if (unidade == 'm' || unidade == 'M'){
		min = horas * 60;
		printf("%d horas e igual a %d minutos", horas, min);
	}
	else if (unidade == 's' || unidade == 'S'){
		seg = horas * 3600;
		printf("%d horas e igual a %d segundos", horas, seg);
	}
	return 0;
}
