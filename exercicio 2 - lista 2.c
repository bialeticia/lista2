// 2. Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor absoluto) elaborando os c�lculos matem�ticos para isso.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, modulo;
	
	printf("Digite o n�mero: ");
	scanf("%d", &numero);
	
	if(numero<0 || numero>=0){
	modulo = numero * (-1);
	printf ("\nO m�dulo do n�mero �: %d", modulo);
	}

return 0;

}	
