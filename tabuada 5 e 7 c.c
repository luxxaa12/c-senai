# include <locale.h>
# include <stdio.h>

int main (){
	setlocale(LC_ALL,"");
	 
	 int i;
	  printf("\nTabuada de multiplicaçao do numero : 5\n");
	 	for (i = 1; i <= 10; i++) {
	 	printf("\n%i x %i = %i \n", 5, i, 5*i);
	 }
	 	printf("\nTabuada de multiplicaçao do numero : 7\n");
	  	for (i = 1; i <= 10; i++) {
	 	printf("\n%i x %i = %i \n", 7, i, 7*i);	
	 }
	 return 0 ;
	}

