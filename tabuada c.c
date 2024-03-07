# include <locale.h>
# include <stdio.h>

//Laço de repetição ou loops

//Laço de repetiçao for = repete uma sequencia de comandos um determinado numeros de vezes


int main(){
int n1,i,resultado;

	printf("Digite um numero");
	scanf("%i",&n1);
	  
	for (i=1;i<=10;i++){
		resultado = n1 * i;
		printf("\n%i x %i = %i",n1,i,resultado);
}
return 0;
}
