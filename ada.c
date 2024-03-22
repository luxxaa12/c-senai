#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){
	
	int numeros [2][2];
	
	int i,j;
	
	printf("Digite os elementos para matriz:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; i++){
			printf("Elementos da linha %d coluna %d:",i+1,j+1);
			scanf("%d",&numeros[i][j]);
		}
	}
}
