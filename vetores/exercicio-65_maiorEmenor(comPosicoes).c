#include <stdio.h>

int main() {
    int maior, menor, posicaoMaior, posicaoMenor, contador, vetor[20];
    posicaoMaior = 0;
    posicaoMenor = 0;
        
    for (contador = 0; contador < 20; contador++)
      scanf("%i", &vetor[contador]);
    maior = vetor[0];
    menor = vetor[0];
    
    for (contador = 0; contador < 19; contador++){
      if (vetor[posicaoMaior] < vetor[contador + 1]){
        posicaoMaior = contador + 1;
        maior = vetor[contador + 1];
      }
    }
    for (contador = 0; contador < 19; contador++){
      if (vetor[posicaoMenor] > vetor[contador + 1]){
        posicaoMenor = contador + 1;
        menor = vetor[contador + 1];
      }
    }
    printf("%i é o menor e %i é o maior\n\nposicao maior: %i\nposicao menor: %i", menor, maior, posicaoMaior, posicaoMenor);
    
    return 0;
}