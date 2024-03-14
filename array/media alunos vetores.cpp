#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	
	float notas[3];
	int i;
	float media;
	
	printf("Digite as notas do vetor\n");
	for (i = 0; i < 3; i++){
		printf("NOTA %iª:", i+1);
		scanf("%f",&notas[i]);
}

	media = notas[i]/3;
printf("\nEXIBIBA DADOS DO VETOR\n");	
	for (i = 0; i < 3; i++){
		printf("%iª nota: %.1f \n",i+1,notas[i]);
		printf("%fª Media: %.1f\n",media);
	}
	return 0;
}
