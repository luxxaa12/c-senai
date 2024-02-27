#include <stdio.h>

int main(){
	//Declarando variaveis.
	char sexo;
	char nome [200];
	int idade;
	float peso;
	
	// Solicitando dados para o usuario.
	printf("Digite seu nome:");
	scanf("%s",&nome);
	
	fflush(stdin);//limpa o cache de input //usar quando o codigo pular uma linha embaixo da linha especifica que e pulada
	
	printf("Informe o sexo com F ou m");
	scanf("%c",&sexo);
	
	printf("Digite sua idade:");
	scanf("%i",&idade);
	
	printf("Digite seu peso:");
	scanf("%f",&peso);
	
	// Exibindo dados para o usuario.
	printf("\n==== Exibindo dados ===\n");
	printf("Nome: %s \n",nome);
	printf("Sexo: %c \n",sexo);
	printf("Idade %i\n",idade);
	printf("Peso %f \n",peso);
}












//printf=escreva
//scanf=leia
