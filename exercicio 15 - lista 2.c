// 15. Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � Internet, 
// para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), 
// caso voc� tenha usado mais de 20 horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float quantHoras, horaExtra, valorBasico, total, calculo;
	
	printf("Informe a quantidade de horas que voc� utilizou: ");
	scanf("%f", &quantHoras);

	if(quantHoras<=20){
		printf("\nVoc� pagar� R$ 30,00 (va1or b�sico).");
	}
	else{
		horaExtra = 1.50;
		calculo = quantHoras * horaExtra;
		total = calculo + 30;
		printf("\nVoc� pagar� %.2f.", calculo);
	}
	
return 0;

}	
