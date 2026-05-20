#include <stdio.h>

int main() {
    int contador, soma;
    for (contador = 1; contador <= 100; contador++){
      printf("%i\n", contador);
      soma += contador;
    }
    printf("A soma dos valores é %i\n", soma);
    return 0;
}