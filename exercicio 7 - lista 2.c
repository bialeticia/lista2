// 7. Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int diferenca, valorUm, valorDois;
	
	printf("Digite o 1� valor num�rico: ");
	scanf("%d", &valorUm);
	fflush(stdin);
	
	printf("\nDigite o 2� valor num�rico: ");
	scanf("%d", &valorDois);
	fflush(stdin);
	
	if (valorUm>=valorDois){
		diferenca = valorUm - valorDois;
		printf("\nA diferen�a do maior valor pelo menor � %d.", diferenca);
	}
	else{
		diferenca = valorDois - valorUm;
		printf("\nA diferen�a do maior valor pelo menor � %d.", diferenca);
	}
	
return 0;

}	
