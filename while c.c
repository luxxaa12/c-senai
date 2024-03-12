#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>


	int main(){
		
		int numero =1, soma = 0,contador = 0;
		float media;
		
	
		
		while (numero >= 0){
			printf("Digite nota");
			scanf("%i",&numero);
			
			if (numero >=0){
				soma = soma + numero;
				contador = contador + 1;
			}
	}
		if (contador == 0){
			printf("\nNenhum numero positivo informado.");
		}else {
			media = soma / contador;
			
		}
			printf("media: %.1f \n",media);
		
		
		return 0;
	}
	
	
