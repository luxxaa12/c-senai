#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

float MetrospCentimetros(float metros){
	return metros * 100;
}

	int main(){
		
		setlocale(LC_ALL, "");
		
		float metros,resultado;
		
		printf("Digite o valor ao qual vc quer fazer a trasferencia para centimetros:");
		scanf("%f",&metros);
		
		resultado = MetrospCentimetros(metros);
		
		printf("Resultado:% .1f cm.\n",resultado);
		
		return 0;
	}
