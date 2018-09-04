#include<stdio.h>
#include <limits.h>

/*
	Solução 2 => valor anteriror inicando com o valor atual;
*/

void main()
{
	int valorAtual;
	int valorAnteriro;
	int contador = 0;
	
	scanf("%i",&valorAtual);
	
	valorAnteriro=valorAtual;
	
	while(valorAtual > 0)
	{	
		scanf("%i",&valorAtual);
		
		if(valorAtual > 0 && valorAtual < valorAnteriro)
		{
			contador ++;
		}	
		
		valorAnteriro = valorAtual;
	}
	
	printf("%d",contador);
}
