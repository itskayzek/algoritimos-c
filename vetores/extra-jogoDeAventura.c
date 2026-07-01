#include <stdio.h>
#define totalSalas 10

int main() {
    int maxVidas, vidas, icont, jcont, corredor[totalSalas];
    maxVidas = 0;
    
    for (icont = 0; icont < totalSalas; icont++){
      printf("Digite o número de vidas da sala %i: \n", icont+1);
      scanf("%i", &corredor[icont]);
      //printf("\n");
    }
    
    for (icont = 0; icont < totalSalas; icont++){
      vidas = corredor[icont];
      if (vidas > maxVidas)
        maxVidas = vidas;
      for (jcont = icont + 1; jcont < totalSalas; jcont++){
        vidas += corredor[jcont];
        if (vidas > maxVidas)
          maxVidas = vidas;
      }
    }
    printf("\no número máximo de vidas que é possivel obter é %i ", maxVidas);
    
    return 0;
}