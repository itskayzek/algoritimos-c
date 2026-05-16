#include <stdio.h>

int main() {
    int kmRodados, resultado;
    printf("Digite a quilometragem da partícula: ");
    scanf("%i", &kmRodados);
    resultado = (kmRodados-3) %8 - 2;
    printf("A partícula atingiu o sensor %i", resultado);
    return 0;
}