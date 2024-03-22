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
	char nomes[4][200];
	float media[4];
	float soma = 0;
	


	for (i = 0; i < 4; i++){
		printf("Digite o  nome do %iª aluno:", i+1);
		scanf("%s",&nomes[i]);
		
		for (j = 0; j < tam; j++){
			printf("Digite a %iª Nota:",j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
			
		}
		
		media[i] = soma / j;
		soma = 0;
		
		
	}
	
	for (i = 0;i <4;i++){
		printf("%iª aluno: %s\n", i+1,nomes[i]);
		for(j = 0; j < tam; j++){
			printf("%iª nota: %.1f \n", j+1,notas[i][j]);
}
		}
printf("Media: %.1f \n",media[i]);	
}
