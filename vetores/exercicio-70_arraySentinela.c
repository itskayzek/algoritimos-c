#include <stdio.h>
#define maxTam 100

int main() {
    int controle, cont, tam, vetor[maxTam];
    tam = 0;
    controle = 1;
    
    printf("Digite os valores do vetor: ");
    
    for (cont = 0; controle > 0 && cont < maxTam; cont++){
      scanf("%i", &vetor[cont]);
      if (vetor[cont] == -1)
        controle--;  //poderia usar break aq sem a variavel controle.
      else
        tam++;
    }
    
    printf("Esse é o seu vetor: ");
    for (cont = 0; cont < tam; cont++)
      printf("%i ", vetor[cont]);
    
    return 0;
}