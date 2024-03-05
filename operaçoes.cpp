#include <stdio.h>

int main (){
	
	int numero1, numero2,soma,subtracao,multiplicacao,divisao;
    
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%i",&numero1);
    
    fflush(stdin);
    
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%i",&numero2);
	
	print    
    soma = numero1 + numero2;
    
    subtracao = numero1 - numero2;
    
    multiplicacao = numero1 * numero2;
    
    divisao = numero1 / numero2;
    
    if("+"){
    	printf("A operaçao digitada e uma soma",soma);	
	}if("/"){
		printf("A operaçao digitada e uma divisao",divisao)
	}i
    
    printf("\n=== Exibindo dados ===\n");
    printf("SOMA: %i \n", soma);
    printf("SUBTRACAO: %i \n",subtracao);
    printf("MULTIPLICACAO: %i \n",multiplicacao);
    printf("DIVISAO: %i \n",divisao);
    
        

    return 0;
	
}
