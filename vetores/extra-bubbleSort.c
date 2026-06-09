#include <stdio.h>
#define max_indice 11

int main() {
    int ind1, ind2, ligacao, controle, vetor[12] = {12, 2, 7, 1, 9, 11, 4, 8, 5, 3, 10, 6};
    controle = 0;
    
    while (controle < max_indice){
      controle = 0;
      ind2 = 1;
      for (ind1 = 0; ind1 < max_indice; ind1++){
        if (vetor[ind1] > vetor[ind2]){
          ligacao = vetor[ind2];
          vetor[ind2] = vetor[ind1];
          vetor[ind1] = ligacao;
        }
        else
          controle++;
      
        ind2++;
      }
    }
    
    for (ind1 = 0; ind1 <= max_indice; ind1++)
      printf("%i ", vetor[ind1]);
    
    return 0;
}