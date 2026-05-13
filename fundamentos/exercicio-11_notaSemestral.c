#include <stdio.h>

int main() {
    float prova1, prova2, prova3, prova4, notaBimestre1, notaBimestre2, notaSemestre;
    printf("Digite as notas das provas do primeiro e segundo bimestre: ");
    scanf("%f %f %f %f", &prova1, &prova2, &prova3, &prova4);
    notaBimestre1 = prova1 + prova2;
    notaBimestre2 = prova3 + prova4;
    notaSemestre = (notaBimestre1 + notaBimestre2)/2;
    printf("A nota semestral é: %.2f", notaSemestre);
}