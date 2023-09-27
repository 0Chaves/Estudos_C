#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
#include "bhaskara.h"


int main(int argc, char *argv[]) {
	double a,b,c;
	double x1,x2;
	
	printf("Valor de a: ");
	scanf("%lf", &a);
	printf("Valor de b: ");
	scanf("%lf", &b);
	printf("Valor de c: ");
	scanf("%lf", &c);
	bhaskara(a,b,c,&x1,&x2);
	printf("Os valores para x sao\n");
	printf("x1: %lf\n", x1);
	printf("x2: %lf", x2);			
	return 0;
};
