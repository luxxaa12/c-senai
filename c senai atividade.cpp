#include <stdio.h>

int main(){
	
	
	int numero;
	
	printf("Digite um numero:");
	scanf("%i:",&numero);
	
	if (numero % 2 == 0){
		printf("\nPar.");
	}else{
		printf("\nImpar.");
	}
	return 0;
}

