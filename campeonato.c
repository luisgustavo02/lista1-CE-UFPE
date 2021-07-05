#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// BIBLIOTECAS ADICIONADAS

int main() {
	int cv, ce, cs, fv, fe, fs;
	int cp, fp;
	// VARIAVEIS CRIADAS
	
	fflush(stdin);
	scanf(" %i %i %i %i %i %i", &cv, &ce, &cs, &fv, &fe, &fs);
	fflush(stdin);
	// DADOS ADICIONADOS
	
	cp = cv*3 + ce;
	fp = fv*3 + fe;
	// CALCULOS DOS PONTOS
	
	if (cp > fp){
		printf("C");
	}
	else if (cp < fp){
		printf("F");
	}
	else if (cp == fp){
		if (cs > fs){
			printf("C");
		}
		else if (cs < fs){
			printf("F");
		}
		else if (cs == fs){
			printf("=");
		}
	}
	// RESULTADOS APRESENTADOS
	
	return 0;
}
