#include <stdio.h>

int main() {
    int eixoX, eixoY;
    printf("Digite o ponto X e Y:");
    scanf("%i %i", &eixoX, &eixoY);
    
    if (eixoX > 0 && eixoY > 0)
      printf("o ponto está no quadrante 1");
    else if (eixoX < 0 && eixoY > 0)
      printf("o ponto está no quadrante 2");
    else if (eixoX < 0 && eixoY < 0)
      printf("O ponto está no quadrante 3");
    else if (eixoX > 0 && eixoY < 0)
      printf("O ponto está no quadrante 4");
    else if (eixoX == 0 && eixoY == 0)
      printf("O ponto está na origem");
    else
      printf("O ponto está no eixo cartesiano");
    
    return 0;
}