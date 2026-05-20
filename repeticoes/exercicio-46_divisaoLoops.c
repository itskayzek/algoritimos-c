#include <stdio.h>

int main() {
    int a, b, qtdeDivisoes;
    scanf("%i %i", &a, &b);
    for (qtdeDivisoes = 0; a >= b; qtdeDivisoes++)
      a -= b;
    printf("o resultado é %i", qtdeDivisoes);
    return 0;
}