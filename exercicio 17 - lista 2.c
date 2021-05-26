// 17. Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, 
// ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o n�mero de dias, aproximados, 
// j� vividos por essa pessoa.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int anoNascimento, anoAtual, numDias, anos;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	fflush(stdin);
	
	printf("\nInforme o ano atual: ");
	scanf("%d", &anoAtual);
	fflush(stdin);

	if (anoNascimento>=0 && anoAtual>=0){
		anos = anoAtual - anoNascimento;
		numDias = 365 * anos;
		printf("\nO n�mero de dias j� vividos s�o, aproximadamente, %d dias.", numDias);
	}

return 0;

}	
