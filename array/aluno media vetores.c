#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	float notas[4], soma = 0;
	int i;
	float media;
	char resultado[200];
	
	printf("Digite as notas do vetor\n");
	for (i = 0; i < 4; i++){
		printf("NOTA %iª:", i+1);
		scanf("%f",&notas[i]);
		soma += notas[i];	
}
	media = soma / 4;
	
	if(media >= 7){
		strcpy(resultado,"O aluno esta aprovado");
	}else if(media >= 5){
		strcpy(resultado,"O aluno esta em recuperaçao");
	}else{
		strcpy(resultado,"O aluno esta reprovado");
	}
	
printf("\nEXIBA DADOS DO VETOR\n");	
	for (i = 0; i < 4; i++){	
		printf("%iª nota: %.1f \n",i+1,notas[i]);
		}
		printf("Media: %.1f\n",media);
		printf("Resultado: %s \n",resultado);
		
		
	return 0;		
	

}
