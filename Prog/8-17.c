#include<stdio.h>

main()
{
	int dentroDoIntervalo = 0;
	int foraDoIntervalo = 0;
	int resposta = 0;
	
	for(int i=0;i<10;i++)
	{
		printf("Digite o %d numero: ",(i+1));
		scanf("%d",&resposta);
		
		if(resposta >= 100 && resposta <= 200)
			dentroDoIntervalo++;
		else
			foraDoIntervalo++;
	}
	
	printf("Fora do intervalo: %d\n", foraDoIntervalo);
	printf("Dentro do intervalo: %d\n", dentroDoIntervalo);
}
