// 11. Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de tri�ngulo o seu tipo: 
// equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um outro tri�ngulo qualquer (escaleno). 
// Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado.

#include <stdio.h> // biblioteca para anexar a fun��o main.
#include <stdlib.h> // biblioteca de fun��es.
#include <locale.h> // biblioteca para portugu�s.
#include <string.h> // biblioteca de strings.
#include <math.h> // biblioteca de fun��es matem�ticas.

int main(){ // in�cio do algoritmo: fun��o "main()".
	
	setlocale(LC_ALL, "Portuguese"); // linguagem em portugu�s.
	
	int valorUm, valorDois, valorTres; // declara��o de vari�veis.
	
	printf("Digite o 1� valor: "); // impress�o do texto para o usu�rio.
	scanf("%d", &valorUm); // recep��o de dados de entrada.
	
	printf("\nDigite o 2� valor: "); // impress�o do texto para o usu�rio.
	scanf("%d", &valorDois); // recep��o de dados de entrada.
	
	printf("\nDigite o 3� valor: "); // impress�o do texto para o usu�rio.
	scanf("%d", &valorTres); // recep��o de dados de entrada.
	
	if(valorUm>=valorDois && valorDois>=valorTres){ // estrutura de decis�o.
		printf("\n� um tri�ngulo equil�tero!"); // impress�o do texto para o usu�rio.
	}

	else if(valorUm>=valorDois && valorUm<=valorTres || valorDois>=valorTres && valorDois<=valorUm || valorUm>=valorTres && valorUm<=valorDois){ // estrutura de decis�o.
		printf("\n� um tri�ngulo is�sceles!"); // impress�o do texto para o usu�rio.
	}

	else if(valorUm<=valorDois && valorDois<=valorTres && valorUm<=valorTres){ // estrutura de decis�o.
		printf("\n� um tri�ngulo escaleno!"); // impress�o do texto para o usu�rio.
	}
	
	else{ // estrutura de decis�o.
	printf("\nOs valores N�O podem constituir os lados de um tri�ngulo!"); // impress�o do texto para o usu�rio.
	}


return 0; // retorno da fun��o.

}	
