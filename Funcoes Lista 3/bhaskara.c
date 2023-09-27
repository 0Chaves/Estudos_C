#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
#include "bhaskara.h"

int bhaskara (double a, double b, double c, double *x1, double *x2){
	double delta = b*b-(4*a*c);
	printf("%lf\n", delta);
	if (delta < 0){
		printf("Esta funcao nao possui raizes reais.\n");
		return 0;
	}
	else if (delta == 0){
		printf("Esta funcao possui apenas uma raiz real.\n");
	}
	*x1 = ((-b+pow(delta,0.5))/(2*a));
	*x2 = ((-b-pow(delta,0.5))/(2*a));
	return 1;
};
