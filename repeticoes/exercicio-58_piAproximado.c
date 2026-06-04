#include <stdio.h>

int main() {
    int numN, contador;
    double termoAtual, potenciacao, somatorio;
    scanf("%i", &numN);
    somatorio = 0.0;
    potenciacao = 0.0;
    if (numN % 2 == 0)
      numN--;
    
    for (termoAtual = 3.0; termoAtual <= numN; termoAtual += 4.0){
      potenciacao = termoAtual * termoAtual * termoAtual;
      somatorio += -(1/potenciacao);
    }
    
    for (termoAtual = 1.0; termoAtual <= numN; termoAtual += 4.0){
      potenciacao = termoAtual * termoAtual * termoAtual;
      somatorio += 1.0/potenciacao;
    }
    printf("%lf", somatorio);
    
    return 0;
}