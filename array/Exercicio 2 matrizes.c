#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#define tam 3

int main(){
	setlocale(LC_ALL,"");
	int i,j;
	float notas [2][tam];
	char nomes[2][200];
		
	printf("Digite os elementos para matriz:\n");
	


	for (i = 0; i < 2; i++){
		printf("Digite o  nome do %i� aluno:", i+1);
		scanf("%s",&nomes[i]);
		
		for (j = 0; j < tam; j++){
			printf("Digite a %i� Nota:",j+1);
			scanf("%f",&notas[i][j]);
		}
	}
	
	for (i = 0;i <2;i++){
		printf("%i� aluno: %s\n", i+1,nomes[i]);
		for(j = 0; j < tam; j++){
			printf("%i� nota: %.1f \n", j+1,notas[i][j]);
}
		}
	
	
}
