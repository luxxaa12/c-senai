# include <locale.h>
# include <stdio.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, numero, par = 0, impar = 0;
	
	
	
	for (i= 1; i <= 5; i ++){
 printf("Digite a %iª numero", i);
	scanf("%i",&numero);
	
	if(numero % 2 == 0){
		// pares = pares + 1;
		par = par + 1;
		
	}else{
		// impares = impares + 1; 
		impar++;
	}
}
	
printf("\n====== Exibindo resultados =====:");
printf("\nQuantidade pares: %i \n",par);
printf("\nQuantidade impares: %i \n",impar);

	
	
	
	
}


