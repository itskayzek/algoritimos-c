#include <stdio.h>
#define maxTam 11

int main() {
    int icont, consecutivos, maiorSequencia, numSorteados[maxTam];
    consecutivos = 1;
    maiorSequencia = 1;
    
    printf("Digite a sequencia de números sorteados: ");
    for (icont = 0; icont < maxTam; icont++)
      scanf("%i", &numSorteados[icont]);
    
    for (icont = 0; icont < maxTam - 1; icont++){
      if (numSorteados[icont] == numSorteados[icont + 1])
        consecutivos++;
      if (consecutivos > maiorSequencia)
        maiorSequencia = consecutivos;
      if (numSorteados[icont] != numSorteados[icont + 1])
        consecutivos = 1;
    }
    
    printf("%i pontos.", maiorSequencia);
    
    return 0;
}