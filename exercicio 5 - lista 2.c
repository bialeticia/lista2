// 5. Complete os exerc�cios 1 (multa no eix�o) e 3 (tri�ngulo) com uma mensagem para quando a condi��o n�o for satisfeita (falsa).7

// (multa no eix�o)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade;
	char placa[7];
	
	printf("Informe a velocidade do carro quando estiver trafegando no Eixo Rodovi�rio: ");
	scanf("%d", &velocidade);
	
	printf("\nInforme a placa do carro: ");
	scanf("%s", &placa);
	
	if (velocidade>=80){
		printf("\nO carro com placa %s ser� multado!", placa);
	}
	else if (velocidade<80){
		printf("\nO carro com placa %s N�O ser� multado!", placa);
	}
	
return 0;

}

// (tri�ngulo)

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
