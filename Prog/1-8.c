#include <stdio.h>

//Alunos C - 60
//Alunos D - 20

void main()
{
    float RodadosC, RodadosD, PorcentagemC, PorcentagemD, PorcetagemRodadosGeral;

    printf("Porcentagem de reprovados na turma C: ");
    scanf("%f", &PorcentagemC);

    printf("Porcentagem de reprovados na turma D: ");
    scanf("%f", &PorcentagemD);

    RodadosC = (PorcentagemC * 60) / 100;
    RodadosD = (PorcentagemD * 20) / 100;
    PorcetagemRodadosGeral = (RodadosC + RodadosD) * 100 / 80;

    printf("Reprovados na turma C ≅ %f\n", RodadosC);
    printf("Reprovados na turma D ≅ %f\n", RodadosD);
    printf("Reprovaram aproximadamente %f%% dos alunos\n", PorcetagemRodadosGeral);
}