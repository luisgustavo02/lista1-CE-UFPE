#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//BIBLIOTECAS ADICIONADAS

int main(){
	float num, soma=0, menor=10.0, maior=5.0, total;
	int i;
	
	for(i=0;i<5;i++){
		scanf(" %f", &num);
		fflush(stdin);
		
		if(num>maior){
			maior = num;
		}
		if(num<menor){
			menor = num;
		}
		
		soma = soma + num;
	}
	total = soma - menor - maior;
	
	printf("%.1f", total);
	
	return 0;
}
