// 12. Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual cidade pertence, considerando s� os seguintes valores:
// 61 - Bras�lia
// 71 - Salvador
// 11 - S�o Paulo
// 21 - Rio de Janeiro
// 32 - Juiz de Fora
// 19 - Campinas
// 27 - Vit�ria
// 31 - Belo Horizonte
// qualquer outro - uma cidade no Brasil sem identifica��o

#include <stdio.h> // biblioteca para anexar a fun��o main.
#include <stdlib.h> // biblioteca de fun��es.
#include <locale.h> // biblioteca para potugu�s.
#include <string.h> // biblioteca de strings.

int main(){ // in�cio do algoritmo: fun��o "main()".
	
	setlocale(LC_ALL, "Portuguese"); // linguagem em portugu�s.
	
	int ddd; // declara��o de vari�veis.
	
	printf("Digite o DDD: "); // impress�o do texto para o usu�rio.
	scanf("%d", &ddd); // recep��o de dados de entrada.
	
	if (ddd==61){ // estrutura de decis�o.
		printf("\nO DDD � de Bras�lia."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==71){ // estrutura de decis�o.
		printf("\nO DDD � de Salvador."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==11){ // estrutura de decis�o.
		printf("\nO DDD � de S�o Paulo."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==21){ // estrutura de decis�o.
		printf("\nO DDD � do Rio de Janeiro."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==32){ // estrutura de decis�o.
		printf("\nO DDD � de Juiz de Fora."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==19){ // estrutura de decis�o.
		printf("\nO DDD � de Campinas."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==27){ // estrutura de decis�o.
		printf("\nO DDD � de Vit�ria."); // impress�o do texto para o usu�rio.
	}
	else if(ddd==31){ // estrutura de decis�o.
		printf("\nO DDD � de Belo Horizonte."); // impress�o do texto para o usu�rio.
	}
	else{ // estrutura de decis�o.
		printf("\nO DDD � uma cidade no Brasil sem identifica��o."); // impress�o do texto para o usu�rio.
	}
	
return 0; // retorno da fun��o.

}	
