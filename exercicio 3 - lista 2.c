// 3. Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo 
// (tri�ngulo � uma figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valorUm, valorDois, valorTres;
	
	printf("Digite o 1� valor: ");
	scanf("%d", &valorUm);
	
	printf("\nDigite o 2� valor: ");
	scanf("%d", &valorDois);
	
	printf("\nDigite o 3� valor: ");
	scanf("%d", &valorTres);
	
	if(valorUm<valorDois+valorTres && valorDois<valorUm+valorTres && valorTres<valorUm+valorDois){
	printf ("\nOs valores podem constituir os lados de um tri�ngulo!");
	}
	else{
	printf ("\nOs valores N�O podem constituir os lados de um tri�ngulo!");
	}

return 0;

}	
