#include <stdio.h>
#define maxTam 10

int main() {
    int posicao, cont, vetor[maxTam], numero;
    posicao = -1;
    
    printf("Ditgite os valores do array: ");
    for (cont = 0; cont < maxTam; cont++)
      scanf("%i", &vetor[cont]);
    printf("Digite o número a ser procurado: ");
    scanf("%i", &numero); 
    
    for (cont = 0; cont < maxTam; cont++){
      if (vetor[cont] == numero){
        posicao = cont;
        printf("O número está na posicao %i.", posicao);
        break;
      }
    }
    if (posicao < 0)
      printf("-1, o número não está no vetor.");
    
    return 0;
}