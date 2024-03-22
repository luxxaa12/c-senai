#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#define tam 5

int main(){
	int numeros[2][2];
	
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;
	
	printf("Elemento 1: %d\n",numeros[0][0]);
	printf("Elemento 2: %d\n",numeros[0][1]);
	printf("Elemento 3: %d\n",numeros[1][0]);
	printf("Elemento 4: %d\n",numeros[1][1]);
}

