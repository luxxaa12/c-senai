#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	
	int idade, opcao, somasalario = 0 , contadorsalario = 0, maioridade = 0,menoridade = 999,mulheres5k;
	float salario,media,mediasalario,pessoas, qtdidade;
	char sexo;
	
/* primeiro criar um codigo que adquira informaçoes do usuario de idade, sexo
e salario */	
	do{
	printf("\n=== Menu ====\n");
	printf("1 - Adicionar pessoa \n");
	printf("2 - Exibir resultados e sair \n");
  	printf("Digite a opçao desejada:");
  	scanf("%i",&opcao);
  	
  	switch (opcao){
  		case 1:
  			
	printf("Digite a sua idade:",qtdidade);
	scanf("%i",&idade);
	
	fflush(stdin);
	
	printf ("Digite o seu sexo - (M/F):");
	scanf("%c",&sexo);
	
	sexo = toupper(sexo);
	
	
	printf("Digite o salario: ");
	scanf("%f",&salario);
	//somasalario = somasalario + salario;
	somasalario +=salario;
	//contadorsalario = contadorsalario + 1
	contadorsalario++;
	
	if (idade > maioridade){
		maioridade = idade;
	}
	
	if(idade < menoridade){
		menoridade = idade;
		
	}if (sexo == 'F' && salario >= 5000)
		mulheres5k++;
		
	break;
	case 2:
		
		mediasalario = somasalario / contadorsalario;
		
		printf("Media do salario do grupo:R$ %.2f \n", mediasalario);
		printf("Maior idade do grupo:%i \n",maioridade);
		printf("Menor idade do grupo: %i \n",menoridade);
		printf("Quantidade de mulheres com salario maior que 5 mil:",mulheres5k)
		
	break;
	default:
		
	printf("\nOpçao invalida.....");
}
	
	}while (opcao !=2);
	
	return 0;

}
	
	
		
		
}

		
// == = igual != diferente
		
		
		
		
		
 

	
	
	

