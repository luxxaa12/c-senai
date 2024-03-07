# include <locale.h>
# include <stdio.h>

int main (){
	setlocale(LC_ALL,"");
	int i,nota;
	float soma, media;
	
	for (i= 1; i <= 4; i ++){
 printf("Digite a %iª nota:", i);
	scanf("%i",&nota);
	
	soma = soma + nota;
	media = soma / 4;
}

printf("====== Exibindo resultados =====");
printf("\nMedia:%f",media);
}
