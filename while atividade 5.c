#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float nota,soma = 0, media;
	
	for (i = 1; i <= 3; i++){
		do{
		printf("Digite a%ª nota:",i);
		scanf("%f",&nota);
	}while (nota < 0 || nota> 10);
	
	soma= soma + nota; 
}
	media = soma /3;
	
	printf("\nMEDIA:%.1f",media);
		
		if(media >= 7){
			printf("O ALUNO ESTA APROVADO");
		}else if (media >= 5 ){
			printf("O ALUNO ESTA EM RECUPERAÇAO");
		}else{
			printf("O ALUNO ESTA REPROVADO");
		}	
		

	return 0;
}
