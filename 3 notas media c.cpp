# include <locale.h>
# include <stdio.h>

int main (){
	setlocale(LC_ALL,"");
	int i,nota;
	float soma, media;
	
	for (i= 1; i <= 3; i ++){
 printf("Digite a %iª nota:", i);
	scanf("%i",&nota);

	soma = soma + nota;
}
	media = soma / 3;
	


printf("====== Exibindo resultados =====");
printf("\nMedia:%.1f",media);
if(media >= 7){
	printf("O aluno esta aprovado");
}else {
	printf("O aluno esta reprovado");

}
}
