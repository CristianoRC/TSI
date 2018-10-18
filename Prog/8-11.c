#include<stdio.h>

main()
{
	int valorUm,valorDois;
	
	
	do
	{
		printf("Digite o primeiro valor: ");
		scanf("%d",&valorUm);
	
		printf("Digite o segundo valor: ");
		scanf("%d",&valorDois);
	
		if(valorUm > valorDois)
			printf("Valores informados invalidos!\n");		
	}
	while(valorUm > valorDois);
	
	int i;
	for(i=valorUm; i <=valorDois; i++)
	{
		printf("%d\n",i);
	}	
}
