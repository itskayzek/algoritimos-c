#include <stdio.h>
#define maxTam 201

int main() {
    int cont, posInicial, posFinal;
    char vetor[maxTam];
    
    printf("Digite sua string: ");
    fgets (vetor, maxTam, stdin);
    
    printf("Digite a posicao inicial e final da substring: ");
    scanf(" %i %i", &posInicial, &posFinal);
    posFinal--;
    posInicial--;
    char substring[(posFinal - posInicial) + 2]; //+2 para considerar o ultimo e o '\0'
    
    for (cont = 0; posInicial <= posFinal; cont++){
      substring[cont] = vetor[posInicial];
      posInicial++;
    }
    
    substring[cont] = '\0';
    printf("%s", substring);
    
    return 0;
}