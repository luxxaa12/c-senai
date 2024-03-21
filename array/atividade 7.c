#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define tam 5

/* Crie um algoritmo que leia 5 numeoros
inteiros e em seguida, mostre na tela :
1- A quantidade de numeros pares e impares;
2- A quantidade de numeros positivos e negativos;
3- Aa quantidade de numeros inseridos
*/

int main (){
	setlocale(LC_ALL,"");
		
		int numero[tam],par = 0, impar = 0,totalnumeros;
		int i;
		int positivo,negativo;
		
		printf("Solicitando dados do vetor\n");
	for (i=0; i < tam; i++){
	printf("numero %iª:",i + 1);
	scanf("%i",&numero[i]);
	
	if(numero[i] % 2 == 0){
		par = par + 1;
	}else{
		impar++;
	}
			
		if(numero[i] >0){
			positivo = positivo + 1;
		}else {
			negativo++;
		}
}
	


totalnumeros = impar +par;

	
	printf("\n ==== EXIBINDO DADOS AO USUARIO ======");
	printf("\nQuantidade pares: %i \n",par);
	printf("\nQuantidade impares:%i \n",impar);
	printf("\nQuantidade de numero positivo:%i\n",positivo);
	printf("\nQuantidade de numero negativo:%i\n",negativo);
	printf("\nQuantidade de numeros inseridos:%i \n",totalnumeros);	
	
		
	}

	
	


