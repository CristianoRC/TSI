#include<stdio.h>
#include <limits.h>

/*
	Solu��o 1 => valor anteriror inicando com o valor m�ximo suportado por um inteiro
*/

void main()
{
	int valorAtual;
	int valorAnteriro = INT_MAX;
	int contador = 0;
	
	do
	{
		scanf("%i",&valorAtual);
		
		if(valorAtual > 0 && valorAtual < valorAnteriro)
		{
			contador ++;
		}	
		
		valorAnteriro = valorAtual;
	}
	while(valorAtual > 0);
	
	printf("%d",contador);
	printf("%d",contador);
}
