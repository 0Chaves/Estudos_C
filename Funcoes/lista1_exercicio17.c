#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
void esfera_area_volume (float r, double *volume, double *area){
	*volume = (4*PI*r*r*r)/3;
	*area = 4*PI*r*r;
}


int main(int argc, char *argv[]) {
	float raio;
	double volume, area;
	
	printf("Raio da esfera: ");
	scanf("%f", &raio);
	
	esfera_area_volume(raio, &volume, &area);
	printf("Area: %f\n", area);
	printf("Volume: %f\n\n", volume);
	return 0;
}
