#include <stdio.h>

int main() {
    int numero, somaDivisores, divisor;
    scanf("%i", &numero);
    somaDivisores = 0;
    
    for (divisor = 1; (divisor*2) <= numero; divisor++){
      if ((numero % divisor) == 0)
        somaDivisores += divisor;
    }
    if (somaDivisores == numero)
      printf("%i é perfeito!", numero);
    else
      printf("ninguém é perfeito :/ \n(mentira, alguns números são...)");
    
    return 0;
}