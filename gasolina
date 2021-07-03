#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// BIBLIOTECAS ADICIONADAS
// 1 galao = 3.8L

int main() {
	float galeua, litbra, cotdol, litdol, liteua;
	// VARIAVEIS CRIADAS
	
	scanf(" %f", &galeua);
	fflush(stdin);
	scanf(" %f", &litbra);
	fflush(stdin);
	scanf(" %f", &cotdol);
	fflush(stdin);
	// DADOS INSERIDOS
	
	litdol = galeua/3.8;
	// GALAO PARA LITROS
	
	liteua = litdol*cotdol;
	// DOLAR PARA REAIS
	
	printf("Gasolina EUA: R$ %.2f\n", liteua);
	printf("Gasolina Brasil: R$ %.2f\n", litbra);
	if(litbra>liteua){
		printf("Mais barata nos EUA");
	}else if(litbra<liteua){
		printf("Mais barata no Brasil");
	}else{
		printf("Igual");
	}
	// RESULTADOS DAS CONDICIONAIS
	
	return 0;
}
