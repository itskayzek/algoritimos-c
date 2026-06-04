#include <stdio.h>

int main() {
    double numN, contador, termoAtual, somatorio;
    scanf("%lf", &numN);
    somatorio = 0.0;
    
    for (termoAtual = numN; termoAtual >= 1; termoAtual = numN){
      for (contador = 1.0; contador < numN; contador++){
        termoAtual *= numN;
      }
      somatorio += 1.0/(termoAtual);
      numN--;
    }
    printf("%lf", somatorio);
    
    return 0;
}