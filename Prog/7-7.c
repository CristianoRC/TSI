#include<stdio.h>

void main()
{
	float valorMaximoPedagio;
	float valorPedagioTemp;
	float valorDistanciaTemp;
	
	int valoresAcimaDoEsperado = 0;
	int trechosInformados = 0;
	int trechosOtimos = 0;
		
	
	printf("Digite o valor maximo do pedagio: ");
	scanf("%f",&valorMaximoPedagio);
	
	do
	{
		printf("Valor do pedagio: ");
		scanf("%f",&valorPedagioTemp);
		
		
		if( valorPedagioTemp >= 0)
		{
			printf("Distancia: ");
			scanf("%f",&valorDistanciaTemp);
			
			if(valorPedagioTemp > valorMaximoPedagio)
			{
				valoresAcimaDoEsperado++;
			}
			else
			{
				if(valorDistanciaTemp > 150)
				trechosOtimos++;
			}
				
			trechosInformados ++;
		}	
	}
	while(valorPedagioTemp > 0);
	
	printf("Trechos valores acima: %d\n",valoresAcimaDoEsperado);
	printf("Trechos informados: %d\n",trechosInformados);
	printf("Trechos acima de 150 Km com valor de pedagio aceito: %d\n",trechosOtimos);
}
