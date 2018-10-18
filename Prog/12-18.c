#include<stdio.h>

main()
{
	int q,r,i,j,termos,contador = 0;
	
	do
	{
		printf("Digite o valor de \"q\" (no maximo 10):");
		scanf("%d",&q);
	}
	while(q > 10 || q <= 0);
	
	do
	{
		printf("Digite o valor de \"r\" (no maximo 10):");
		scanf("%d",&r);
	}
	while(r > 10 || r <= 0);
	
	if(q<r)
		termos = q;
	else
		termos = r;
	
	int a[q], b[r],vi[termos];
	
	
	for(i = 0; i < q; i++)
	{
		printf("Digite o %d termo do vetor A: ",(i+1));
		scanf("%d",&a[i]);
	}
	
	
	for(i = 0; i < r; i++)
	{
		printf("Digite o %d termo do vetor B:",(i+1));
		scanf("%d",&b[i]);
	}

	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
					if(a[i] == b[j])
			{
				vi[contador] = a[i];
				contador++;
			}
			
		}
	}
		
	for(i=0;i<contador;i++)
	{
		printf("%d ",vi[i]);
	}
}
