#include <stdio.h>


int main(){	
	float salarioInformado, quantidadeSalario, salarioMinimo = 1412.00;
	
	printf("Digite o salario:");
	scanf("%f",&salarioInformado);
	
	quantidadeSalario = salarioInformado / salarioMinimo;
	
	printf("\nSalario informado:%.2f \n", salarioInformado);
	printf("\nQuantidade de salarios: %.2f\n",quantidadeSalario);
	
	return 0;
}
