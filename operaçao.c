#include <stdio.h>

int somar (float n1,float n2){
	return n1 + n2;
}
int subtrair(float n1,float n2){
	return n1 - n2;
}

int multiplicar(float n1,float n2){
	return n1 * n2;
}
int dividir (float n1,float n2){
	return n1 / n2;
}

int main(){
	float n1,n2,subtracao,soma,divisao,multiplicacao;
	
	printf("Digite o primeiro numero:");
	scanf("%f",&n1);
	
	fflush(stdin);
	
	printf("Digite o segundo numero:");
	scanf("%f",&n2);
	
	fflush(stdin);
	
	soma = somar (n1,n2);
	
	subtracao = subtrair (n1,n2);
	
	divisao = dividir (n1,n2);
	
	multiplicacao = multiplicar (n1,n2);
	
	printf("\nSoma:%1f\n",soma);
	printf("\nSubtrair:%1f\n",subtracao);
	printf("\nDivisao:%1f\n",divisao);
	printf("\nMultiplicacao:%1f\n",multiplicacao);
		
		return 0;
}
