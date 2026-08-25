#include <stdio.h>
#define maxTam 100
#define TRUE 1
#define FALSE 0

int main() {
    int icont, jcont, repetiu, digito1, digito2, sequencia[maxTam];
    digito1 = 0;
    digito2 = 0;
    repetiu = FALSE;
    
    printf("Digite um valor: ");
    while (TRUE){
      scanf("%i", &sequencia[0]);
      if (sequencia[0] >= 100 || sequencia[0] < 0)
        printf("Valor inválido! tente novamente.\n");
      else
        break;
    }
    
    for (icont = 0; !repetiu; icont++){
      if (sequencia[icont] >= 10){ // isso é inutil, se fosse num com 1 digito, seria o msm q somar seu quadrado com 0 == ele msm
        digito1 = sequencia[icont] / 10;
        digito2 = sequencia[icont] % 10;
        
        digito1 *= digito1;
        digito2 *= digito2;
        
        sequencia[icont + 1] = digito1 + digito2;
      }
      else
        sequencia[icont + 1] = sequencia[icont] * sequencia[icont];
      
      if (sequencia[icont + 1] >= 100)
        sequencia[icont + 1] /= 2;
      
      for (jcont = 0; jcont < icont + 1; jcont++){
        if (sequencia[jcont] == sequencia[icont + 1]){
          repetiu = TRUE;
          break;
        }
      }
    }
    
    printf("\nSequencia: ");
    for (jcont = 0; jcont < icont; jcont++)
      printf("%i\t", sequencia[jcont]);
    printf("\nO dito cujo: %i", sequencia[icont]);
    
    return 0;
}