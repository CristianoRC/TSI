#include <stdio.h>

void main()
{
    int a, b, resultado;

    do
    {
        resultado = 0;
        printf("Digite o valor de A: ");
        scanf("%d", &a);

        printf("Digite o valor de B: ");
        scanf("%d", &b);

        if (a != b)
        {
            if (a < b)
            {

                for (int i = a; i <= b; i++)
                {
                    if (i % 2 != 0)
                        resultado += i;
                }
            }
            else
            {
                int contador = 0;
                for (int i = b; i <= a; i++)
                {
                    if (i % 3 == 0)
                    {
                        resultado += i;
                        contador++;
                    }
                }
                resultado /= contador;
            }

            printf("Resultado: %d\n", resultado);
        }

    } while (a == b);
}