// 6. Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("\nO n�mero %d � PAR.", numero);
	}
	else{
		printf("\nO n�mero %d � �MPAR.", numero);
	}
	
return 0;

}	
