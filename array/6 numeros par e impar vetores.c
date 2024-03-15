#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
# define tam 6

int main (){
	setlocale(LC_ALL,"");
	int numero [tam], par = 0, impar =0;
	int i;
	
	printf("Solicitando dados do vetor\n");
	for (i=0; i < tam; i++){
	printf("numero %iª:",i + 1);
	scanf("%i",&numero[i]);
	
	if(numero[i] % 2 == 0){
		par = par + 1;
	}else{
		impar++;
	}
}

	printf("\n ==== EXIBINDO DADOS AO USUARIO ======");
	printf("\nQuantidade pares: %i \n",par);
	printf("\nQuantidade impares:%i \n",impar);
		
		
	}

