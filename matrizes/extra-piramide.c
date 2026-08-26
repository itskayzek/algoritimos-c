#include <stdio.h>
//#define dim 3

int main() {
    int icont, jcont, posInicial, posFinal, camada, dim;
    camada = 1;
    
    printf("Digite a dimensão da base da sua piramide: ");
    scanf("%i", &dim);
    int piramide[dim][dim];
    
    posInicial = camada - 1;
    posFinal = dim - 1;
    while (posFinal > posInicial){
      for (icont = posInicial, jcont = posInicial; jcont <= posFinal; jcont++){
        piramide[icont][jcont] = camada;
        piramide[jcont][icont] = camada;
      }
      
      for (icont = posFinal, jcont = posFinal; jcont >= posInicial + 1; jcont--){
        piramide[icont][jcont] = camada;
        piramide[jcont][icont] = camada;
      }
      camada++;
      posInicial++;
      posFinal--;
    }
    
    if (posInicial == posFinal)
      piramide[camada - 1][camada - 1] = camada;
    
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        printf("%i\t", piramide[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}