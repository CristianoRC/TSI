#include <stdio.h>

void main()
{
    int campos = 0, valorTemp = 0;

    scanf("%d", &campos);

    int acumuladores[campos];
    int chaves[campos];

    for (int i = 0; i < campos; i++)
    {
        acumuladores[i] = 0;
        chaves[i] = 0;
    }

    for (int i = 0; i < campos; i++)
    {
        scanf("%d", &valorTemp);

        int temChave = 0;

        for (int i = 0; i < campos; i++)
        {
            if (chaves[i] == valorTemp)
            {
                temChave = 1;
                acumuladores[i]++;
                break;
            }
        }

        if (temChave == 0)
        {
            for (int i = 0; i < campos; i++)
            {
                if (chaves[i] == 0)
                {
                    chaves[i] = valorTemp;
                    acumuladores[i]++;
                    break;
                }
            }
        }
    }

    for (int c = 0; c < campos - 1; c++)
    {
        for (int d = 0; d < campos - c - 1; d++)
        {
            if (chaves[d] > chaves[d + 1] && chaves[d] != 0)
            {
                int swapChaves = chaves[d];
                chaves[d] = chaves[d + 1];
                chaves[d + 1] = swapChaves;

                int swapAcumuladores = acumuladores[d];
                acumuladores[d] = acumuladores[d + 1];
                acumuladores[d + 1] = swapAcumuladores;
            }
        }
    }

    for (int i = 0; i < campos; i++)
    {
        if (chaves[i] != 0)
        {

            printf("%d aparece %d vez(es)\n", chaves[i], acumuladores[i]);
        }
    }
}