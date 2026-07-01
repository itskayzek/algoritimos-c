#include <stdio.h>
#define maxTam 20

int main() {
    int cont, tam, jaApareceu, valorN, vetor[maxTam];
    tam = 0;
    vetor[-1] = 0; // problema, era melhor só ter colocado vetor[0] = 0; ._.
    
    printf("Essa é a sequencia de Recamán (até 20):\n");
    for (valorN = 0; valorN < maxTam; valorN++){
      jaApareceu = 0;
      vetor[valorN] = vetor[valorN - 1] - valorN;
      
      for (cont = 0; cont < valorN; cont++){
        if (vetor[valorN] == vetor[cont])
          jaApareceu++;
      }
      if (vetor[valorN] <= 0 || jaApareceu > 0)
        vetor[valorN] = vetor[valorN - 1] + valorN;
      
      printf("%i ", vetor[valorN]);
    }
    
    while (tam > -1){
      printf("\n\nDigite o tamanho que desejas para o vetor: ");
      scanf("%i", &tam);
      for (cont = 0; cont < tam && cont < maxTam; cont++)
        printf("%i ", vetor[cont]);
    }
    
    return 0;
}