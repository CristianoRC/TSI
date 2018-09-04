#include <stdio.h>

void main(){
	int escolha;
	int alcool = 0;	
	int gasolina = 0;
	int disel = 0;
	
	do
	{
		
		do
		{
			printf("1.Alcool 2.Gasolina 3.Diesel 4.Fim: ");
			scanf("%i",&escolha);
		}
		while(escolha < 1 && escolha > 4);

		
		switch(escolha)
		{
			case 1:
				alcool++;
				printf("Alcool\n");
			break;	
			case 2:
				gasolina++;
				printf("Gasolina\n");
			break;	
			case 3:
				disel++;
				printf("Disel\n");
			break;	
		}
	}
	while(escolha != 4);
	
	printf("\n\nAlcool: %d\n",alcool);
	printf("Gasolina: %d\n",gasolina);
	printf("Disel: %d\n",disel);
}
