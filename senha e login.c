#include <stdio.h>
#include <string.h>


void cabecalho(){ //Copia no codigo uma determinada funçao

printf("\n==============\n");
printf("\n=== Senai ====\n");
printf("\n==============\n"); 
//fflush limpa cache

}

int main (){
	
	char login [200], logincadastrado[200] = "Marta";// o[] faz com que o char vire um striger ou seja um caracter vire uma cadeia
	char senha [200], senhacadastrada [200] = "123";
	
	cabecalho();
	printf("Digite o login:");
	scanf("%s",&login);
	
	cabecalho();
	printf("Digite a senha:");
	scanf("%s",&senha);
	
	cabecalho();
	if (strcmp(login, logincadastrado) == 0 && strcmp(senha, senhacadastrada) == 0) {  //strcmp cria uma coparaçao entre duas variaveis
	printf("Bem vindo!");
	
	}else{
		printf("Acesso negado.");
	
	}              
	
	return 0;
	
}
