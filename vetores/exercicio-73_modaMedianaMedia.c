#include <stdio.h>
#define maxTam 20

int main() {
    int moda, repeticao, maiorRepeticao, cont1, cont2, vetor[maxTam];
    int ligacao, soma;
    int mediana, media;
    maiorRepeticao = 0;
    ligacao = 0;
    soma = 0;
    
    printf("Ditgite os valores do array: ");
    for (cont1 = 0; cont1 < maxTam; cont1++)
      scanf("%i", &vetor[cont1]);
    
    for (cont1 = 0; cont1 < maxTam; cont1++){
      repeticao = 0;
      for (cont2 = 0; cont2 < maxTam; cont2++){
        if (vetor[cont1] == vetor[cont2])
         repeticao++;
        if (repeticao > maiorRepeticao){
          maiorRepeticao = repeticao;
          moda = vetor[cont1];
        }
      }
    }
    if (maiorRepeticao > 1)
      printf("A moda é %i\n", moda);
    else
      printf("Os valores não se repetiram\n");
//-------------------------------------------------------
    for (cont1 = 0; cont1 < maxTam; cont1++){
      for (cont2 = cont1 + 1; cont2 < maxTam; cont2++){
        if (vetor[cont1] > vetor[cont2]){
          ligacao = vetor[cont1];
          vetor[cont1] = vetor[cont2];
          vetor[cont2] = ligacao;
        }
      }
    }
    if (maxTam % 2 == 0)
      mediana = (vetor[(maxTam / 2) - 1] + vetor[maxTam / 2]) / 2;
    else
      mediana = vetor[maxTam / 2 + 1];
    printf("A mediana é %i\n", mediana);
//-------------------------------------------------------
    for (cont1 = 0; cont1 < maxTam; cont1++)
      soma += vetor[cont1];
    media = soma / maxTam;
    printf("A média é %i\n", media);
    
    return 0;
}