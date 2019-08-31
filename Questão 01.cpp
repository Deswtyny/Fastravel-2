#include <stdio.h>
#include <stdlib.h>

int main (void){
	int y, *p, x;				/*Cria 3 variaveis, dois são inteiros e um é ponteiro*/
	y = 0;						/*Atribui a variavel 'y' o valor 0(zero)*/
	p = &y;						/*Faz um endereçamento no ponteiro 'p', fazendo com que ele aponte para o endereço da variavel 'y', assumindo seu valor*/
	x = *p;						/*Atribui a variavel 'x' o valor de 'y' pelo ponteiro 'p'*/
	x = 4;						/*Atribui a variavel 'x' o valor de 4(quatro)*/
	(*p)++;						/*Faz uma soma ao pontreiro 'p' acrescentando +1 ao seu valor, modificando assim o valor de 'y'*/
	x--;						/*Faz uma subtração na variavel 'x' diminuindo 1*/
	(*p) += x;					/*Faz uma soma com o valor de 'y', pelo ponteiro 'p' (Que ainda aponta para o endereço de 'y'), com o valor de 'x' (1 + 3)*/
	printf ("y = %d\n", y);	
	return 0;
}
