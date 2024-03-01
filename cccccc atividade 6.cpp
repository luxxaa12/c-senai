#include <stdio.h>

int main(){
	char nome[200];
	int idade;
	
	printf("Digite seu nome:");
	scanf("%s:",&nome);
	
	printf("Digite sua idade:");
	scanf("%i:",&idade);
	
	if(idade <= 18){
		printf("O INDIVIDUO NAO E OBRIGADO A VOTAR");
	}if(idade >= 65){
		printf("O INDIVIDUO NAO E OBRIGADO A VOTAR");
	}else{
	 printf("O INDIVIDUO E OBRIGADO A VOTAR");
}
return 0;
}
