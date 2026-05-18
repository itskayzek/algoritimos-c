#include <stdio.h>

int main() {
    int numero, potencia, expoente, contador;
    scanf("%i %i", &numero, &expoente);
    potencia = 1;
    for (contador = 0; contador < expoente; contador++)
      potencia *= numero;
    printf("%i", potencia);
  return 0;
}