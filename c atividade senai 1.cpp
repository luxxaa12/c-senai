#include <stdio.h>

int main(){
 //Declarando as variaveis
 char nome [200];
 int idade;
 float nota1,nota2;
 float media;
 //Coletaando dados do usuario
 printf("Digite seu nome:");
 scanf("%c",&nome);
 
 fflush(stdin);
 
 printf("Digite o valor equivalente a nota1::");
 scanf("%f",&nota1);
 

 
 printf("Digite o valor equivalente a nota2:");
 scanf("%f",&nota2);
 
 
 
 // calculos
 media=(nota1+nota2)/2;
 
 //Exibindo dados ao usuario
 printf("\n==== Exibindo dados ao usuario ====\n");
 printf("\nNota1:%f",nota1);
 printf("\nNota2:%f",nota2);
 printf("\nMedia:%f",media);
}
