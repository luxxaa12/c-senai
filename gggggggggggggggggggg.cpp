#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
# include <ctype.h>
int main (){
	int contador = 0;
	float nota,soma = 0,media;
	char resposta;
		do{
		printf("Deseja inserir uma nota?:");
		scanf("%c",&resposta);
		
		resposta = toupper(resposta);
		
		if(resposta != 'N'){
			printf("Digite a %dª nota:", contador + 1);
			scanf("%f",&nota);
			
			soma = soma + nota;
			contador = contador + 1; 
		}
		
		
	}while (resposta != 'N');
	
	media = soma / contador;
	printf("MEDIA ; %.1f \n",media);
	
	
	return 0;
	
}
