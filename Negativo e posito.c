# include <locale.h>
# include <stdio.h>

void verificarPositivoOuNegativo(numero){
	if (numero == 0) {
		printf("Zero e neutro.");
	}else if (numero > 0){
		printf("Positivo.");
	}else{
		printf("Negativo");
	}
}

int main (){
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("Digite um numero:");
	scanf("%i",&numero);
	
	verificarPositivoOuNegativo(numero);
	
	return 0;
}
