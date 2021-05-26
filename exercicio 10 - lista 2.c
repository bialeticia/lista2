// 10. Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual o menor deles, mostrando-o no final. 
// Fa�a o chinesinho ao lado do seu algoritmo.

#include <stdio.h> // biblioteca para anexar a fun��o main.
#include <stdlib.h> // biblioteca de fun��es.
#include <locale.h> // biblioteca para potugu�s.
#include <string.h> // biblioteca de strings.

int main(){ // in�cio do algoritmo: fun��o "main()".
	
	setlocale(LC_ALL, "Portuguese"); // linguagem em portugu�s.
	
	int a, b, c, menor; // declara��o de vari�veis.
	
	printf("Digite o 1� valor num�rico: "); // impress�o do texto para o usu�rio.
	scanf("%d", &a); // recep��o de dados de entrada.
	fflush(stdin); // limpeza dos buffers.
	
	printf("\nDigite o 2� valor num�rico: "); // impress�o do texto para o usu�rio.
	scanf("%d", &b); // recep��o de dados de entrada.
	fflush(stdin); // limpeza dos buffers.
	
	printf("\nDigite o 3� valor num�rico: "); // impress�o do texto para o usu�rio.
	scanf("%d", &c); // recep��o de dados de entrada.
	fflush(stdin); // limpeza dos buffers.
	
	if (a<b && a<c){ // estrutura de decis�o.
		printf("\nO menor deles � %d.", a); // impress�o do texto para o usu�rio.
	}
	else if(b<c){ // estrutura de decis�o.
		printf("\nO menor deles � %d.", b); // impress�o do texto para o usu�rio.
	}
	else{ // estrutura de decis�o.
		printf("\nO menor deles � %d.", c); // impress�o do texto para o usu�rio.
	}
	
return 0; // retorno da fun��o.

}	
