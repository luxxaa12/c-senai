#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
 
 
 int main(){
 	
 	float nota1,nota2, media,soma;
 	
 	
 	 do{
 	printf("Escreva a nota 1:");
 	scanf("%f:",&nota1);
	  }while (nota1 < 0 || nota1 > 10);
	  
	   do{
 	printf("Escreva a nota 2:");
 	scanf("%f:",&nota2);
 	
	  }while (nota2 < 0 || nota2 > 10);
	  
	  soma = nota1 + nota2;
	  media= soma / 2;
	 
	 
	 printf("\nExibindo media: %.1f \n", media);

	return 0;
 	
 	
 }
