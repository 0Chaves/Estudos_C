#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//Declara as variáveis
	int porta, codigo;
	
	//Pede ao usuário o número da porta que deseja validar o acesso. Também pede seu código de acesso
	printf("Por qual porta deseja entrar?\nDigite:\n1 - para porta 1\n2 - para porta 2\n3 - para porta 3\n");
	scanf("%d", &porta);
	printf("Qual seu codigo de usuario?\n");
	scanf("%d", &codigo);
	
	//De acordo com a porta escolhida e o código dado, diz se o acesso foi liberado ou negado
	if (porta == 1){
		if ((codigo >= 1000 && codigo <= 2000)||(codigo >= 3000 && codigo <= 5000)){
			printf("Acesso liberado.");
		}
		else{
			printf("Acesso negado.");
		}
	}
	else if (porta == 2){		
		if(codigo >= 150 && codigo <= 350){
			printf("Acesso liberado.");
		}
		else {
			printf("Acesso negado.");
		}
	}
	else if (porta == 3){		
		if ((codigo >= 10000 && codigo <= 11000)||(codigo >= 20000 && codigo <= 30000)){
			printf("Acesso liberado.");
		}
		else {
			printf("Acesso negado.");
		}
	}
	else{
		printf("Porta inexistente.");
	}
	return 0;
}
