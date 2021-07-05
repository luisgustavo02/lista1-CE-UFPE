#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//BIBLIOTECAS ADICIONADAS

int main() {
	int cons, extra1, extra2, extra3, preco;
	scanf(" %i", &cons);
	
	if (cons<=10){
		printf("7");
		//CONSUMO PADRAO
		
	}else if (cons>=11 && cons<=30){
		extra1 = cons - 10;
		preco = 7 + (extra1 * 1);
		printf("%i", preco);
		//CONSUMO BAIXO
		
	}else if (cons>=31 && cons<=100){
		extra2 = cons - 30;
		preco = 7 + 20 + (extra2 * 2);
		printf("%i", preco);
		//CONSUMO MEDIO
		
	}else if (cons>=101){
		extra3 = cons - 100;
		preco = 7 + 20 + 140 + (extra3 * 5);
		printf("%i", preco);
		//CONSUMO ALTO
		
	}
	
	return 0;
}
