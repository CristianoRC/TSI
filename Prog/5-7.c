#include <stdio.h>

void main()
{
    float anguloUm, anguloDois, AnguloTres;

    printf("Insira o angulo 1: ");
    scanf("%f", &anguloUm);

    printf("Insira o angulo 2: ");
    scanf("%f", &anguloDois);

    printf("Insira o angulo 3: ");
    scanf("%f", &AnguloTres);

    if (anguloUm == 90 || anguloDois == 90 || AnguloTres == 90)
    {
        printf("Triangulo retangulo\n");
    }
    else if (anguloUm >= 90 || anguloDois >= 90 || AnguloTres >= 90)
    {
        printf("Triangulo obtusangulo\n");
    }
    else
    {
        printf("Triangulo acutangulo\n");
    }
}