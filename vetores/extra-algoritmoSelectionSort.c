#include <stdio.h>
#define maxTam 10

int main() {
    int cont1, cont2, ligacao, vetor[maxTam];
    for (cont1 = 0; cont1 < maxTam; cont1++)
      scanf("%i", &vetor[cont1]);
    
    for (cont1 = 0; cont1 < maxTam; cont1++){
      for (cont2 = cont1 + 1; cont2 < maxTam; cont2++){
        if (vetor[cont1] > vetor[cont2]){
          ligacao = vetor[cont1];
          vetor[cont1] = vetor[cont2];
          vetor[cont2] = ligacao;
        }
      }
    }
    for (cont1 = 0; cont1 < maxTam; cont1++)
      printf("%i ", vetor[cont1]);
    
    return 0;
}