#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main (){
	
	char loginusuario[200];
	char senhausuario[200];
	char senhacadastrado[200] = "123";
	char logincadastrado[200] = "MARTA";
	
	
	do{
		
		printf("Digite o logincadastrado:",logincadastrado);
		scanf("%s",&loginusuario);
		
		printf("Digite a senha cadastrada:",senhacadastrado);
		scanf("%s",&senhausuario);
		
	}while(strcmp(loginusuario, logincadastrado) !=0 || strcmp(senhausuario, senhacadastrado) != 0 );
	/*ENQUANTO A COMPARAÇAO (STRCMP) LOGINUSUARIO,LOGINCADASTRADO FOR IGUAL A 0 OU ENQUANTO A COMPARAÇAO SENHAUSUARIO,SENHACADASTRADA FOR IGUAL
	A 0 SE ALGUNS DOS DOIS FOREM FALSOS REPETE*/
	
		printf("seja bem vindo");
		
	
	return 0;
		
	
}
