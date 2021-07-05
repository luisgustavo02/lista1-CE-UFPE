#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// BIBLIOTECAS ADICIONADAS

int main() {
	int n1, n2, dif, resto, div2, div3, total;
	
	scanf(" %i", &n1);
	fflush(stdin);
	scanf(" %i", &n2);
	fflush(stdin);
	
	dif = fabs(n1-n2);
	div3 = dif/3;
	resto = dif - div3*3;
	
	if(resto==0){
		printf("%i", div3);
	}else if(resto==1){
		if(n1==n2+1 || n2==n1+1){
			printf("2");
		}else{
			div3 = div3 - 1;
			div2 = 2;
			total = div3 + div2;
			printf("%i", total);
		}
	}else if(resto==2){
		div2 = 1;
		total = div3 + div2;
		printf("%i", total);
	}
	
	return 0;
}
