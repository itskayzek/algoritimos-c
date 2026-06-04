#include <stdio.h>

int main() {
    int valor, produto, numero;
    scanf("%i", &numero);
    produto = 0;
    
    for (valor = 0; produto < numero; valor++){
      produto = valor * (valor + 1) * (valor + 2);
      if (produto == numero)
        printf("%i é um número triangular \npois %i × %i × %i = %i", numero, valor, valor + 1, valor + 2, produto);
    }
    if (produto != numero)
      printf("Esse número não é triangular!");
    
    return 0;
}