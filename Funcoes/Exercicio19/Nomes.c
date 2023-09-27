#include "Nomes.h"
#include <string.h>
#define MAX_NOMES 5

char nomes[MAX_NOMES][TAM];
int quantidade = 0;
// NAO CRIAR NOVAS VARIÁVEIS GLOBAIS. CRIE NOVAS VARIAVEIS APENAS DENTRO DAS FUNCOES

int salvarNome(char nome[])
{
	if(quantidade<MAX_NOMES){
		strcpy(nomes[quantidade], nome);
		quantidade++;
		return 1;
	}
	else{
		return 0;
	}
}

int QuantidadeNomes()
{
	return quantidade;
}

char* obterNomePeloIndice(int indice)
{
	return nomes[indice];
}

int ApagarPeloNome(char* nome)
{
	for(int i=0; i<quantidade; i++){
		if(strcmp(nome, nomes[i]) == 0){
			strcpy(nomes[i], nomes[quantidade-1]);
			quantidade--;
			return 1;
		}
	}
	return 0;
}

int ApagarPeloIndice(int indice)
{
	if(quantidade>0 && indice<quantidade && indice >= 0){
		strcpy(nomes[indice], nomes[quantidade-1]);
		quantidade--;
		return 1;
	}
	else{
		return 0;
	}
}

