#include <stdio.h>

int mediar (int n1,int n2) {
	int media;
	media = (n1 + n2)/2;
	return media;
}

int cabecalho (){
printf("\n===== Senai ====\n");
}

   int main () {
	
	int n1,n2,primeironumero, segundonumero, media;
	
	printf("Digite o primeiro numero:");
	scanf("%i",&n1);
	
	printf("Digite o segundo numero:");
	scanf("%i",&n2);
	
	media = mediar(n1, n2);
	
	cabecalho();
	printf("\nMedia: %i \n",media);
	
	return 0;
}
