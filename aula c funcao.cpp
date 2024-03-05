#include <stdio.h>

void cabecalho(){
	printf("===== Senai ==== \n");
	fflush(stdin);
}

int somar(int n1, int n2) { //uma chamada de funçao e um desvio de codigo
		int soma;
		soma = n1 + n2;
		return soma;
}

int subtrair(int n1,int n2) {
		int subtracao; 
		subtracao = n1 - n2;
		return subtracao;
}
	
	int main(){
		int primeironumero,segundonumero,soma,n1,n2;
		
	cabecalho();
	printf("Digite o primeiro numero:");
	scanf("%i",&primeironumero);
	
	
	
	cabecalho();
	printf("Digite o segundo numero:");
	scanf("%i",&segundonumero);
	
	fflush(stdin);
	
	soma = somar(primeironumero,segundonumero);
	
	printf("\nSoma: %i \n", soma);
	
	return 0;
}
