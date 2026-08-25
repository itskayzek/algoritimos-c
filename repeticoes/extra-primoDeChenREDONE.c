#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
    int divisor, ehPrimo, num, outroNum, outroDivisor, numProduto;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    if (num <= 1)
      ehPrimo = FALSE;
    else {
      ehPrimo = TRUE;
      for (divisor = 2; divisor <= num / 2; divisor++){
        if (num % divisor == 0){
          ehPrimo = FALSE;
          break;
        }
      }
    }
    
    if (ehPrimo == TRUE){
      outroNum = num + 2;
      for (divisor = 2; divisor <= outroNum / 2; divisor++){
        if (outroNum % divisor == 0){
          numProduto = outroNum / divisor;
          ehPrimo = TRUE;
          
          for (outroDivisor = 2; outroDivisor <= divisor / 2; outroDivisor++){
            if (divisor % outroDivisor == 0){
              ehPrimo = FALSE;
              break;
            }
          }
          for (outroDivisor = 2; outroDivisor <= numProduto / 2; outroDivisor++){
            if (numProduto % outroDivisor == 0){
              ehPrimo = FALSE;
              break;
            }
          }
        }
      }
    }
    
    if (ehPrimo == TRUE)
      printf("%d é um número primo de chen", num);
    else
      printf("%d não é um número primo de chen", num);
    
    return 0;
}