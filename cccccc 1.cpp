#include <stdio.h>

int main(){
//Declarando variaveis	
	char nome [200];
	float media,nota1,nota2,nota3;
	int idade;
	
	printf("\nDigite seu nome:");
	scanf("%c:",&nome);
	
	fflush(stdin);

	printf("Digite a nota1:");
	scanf("%f:",&nota1);
	
	fflush(stdin);
	
	printf("Digite sua nota2:");
	scanf("%f:",&nota2);
	
	printf("Digite sua nota3:");
	scanf("%f:",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	if(media >=7){
	printf("O aluno esta aprovado");
}else{
	printf("O aluno esta reprovado");
} 
//exibindo resultados ao usuario

printf("\n===== Exibindo dados ao usuario =====\n");
printf("\nNome:%c:",nome);
printf("\nMedia:%f:",media);

//limpa tela = system("cls");

return 0;
}
