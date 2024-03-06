#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

char* verificarImparOuPar(int numero){
	char resposta[200];
	if(numero % 2 == 0 ) {
		strcpy(resposta, "Par.");
	}else{
		strcpy(resposta, "Impar.");	
}
	return resposta;
}


int main(){
	
	setlocale(LC_ALL, "");
	
	int numero;
	char resultado[200];
	
	printf("Digite um numero:" );
	scanf("%i",&numero);
	
	strcpy(resultado, verificarImparOuPar(numero));
	
	printf("Resultado: %s \n", resultado);	
	
	
	return 0;
}
