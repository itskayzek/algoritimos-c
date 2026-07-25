#include <stdio.h>
#define lin 5
#define col 5
#define maxTam 5

int main() {
    int jcont, icont, xColuna, xLinha, somaLinhas[maxTam] = {0}, somaColunas[maxTam] = {0}, matriz[lin][col];
    
    for (icont = 0; icont < maxTam; icont++){
      for (jcont = 0; jcont < maxTam; jcont++){
        scanf("%i", &matriz[icont][jcont]);
      }
    }
    
    for (icont = 0; icont < maxTam; icont++){
      for (jcont = 0; jcont < maxTam; jcont++){
        somaLinhas[icont] += matriz[icont][jcont];
        somaColunas[jcont] += matriz[icont][jcont];
      }
    }
    
    printf("Digite a linha e a coluna que desejas ver a soma respectivamente: ");
    scanf("%i %i", &xLinha, &xColuna);
    xLinha--;
    xColuna--;
    printf("%i %i", somaLinhas[xLinha], somaColunas[xColuna]);
    
    return 0;
}