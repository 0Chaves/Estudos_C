#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, resultado;
	char op;
	
	printf("");
	scanf("%f %c %f", &a, &op, &b);
	
	if (op == '+'){
		resultado = a + b;
	}
	else if (op == '-'){
		resultado = a - b;
	}
	else if (op == '*'){
		resultado = a * b;
	}
	else if (op == '/'){
		resultado = a / b;
	}
	printf("%.2f", resultado);
	return 0;
}
