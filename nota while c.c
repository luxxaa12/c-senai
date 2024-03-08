#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
 
 
 int main(){
 	
 	float nota;
 	
 	
 	 do{
 	printf("Escreva a nota:");
 	scanf("%f:",&nota);
 	
	  }while (nota < 0 || nota > 10);
	  
	 printf("\nNota informada: %.1f \n", nota);


	 return 0;
 	
 	
 }
