#include <stdio.h>
#define maxTam 202

int main() {
    int jcont, icont, maiorSequencia, posMaiorSequencia, sequenciaAtual;
    char maiorPalavra[maxTam], vetor[maxTam];
    maiorSequencia = 0;
    posMaiorSequencia = 0;
    sequenciaAtual = 0;
    
    fgets (vetor, maxTam, stdin);
    
    for (icont = 0; vetor[icont] != '\0'; icont++){
      if ((vetor[icont] >= 'A' && vetor[icont] <= 'Z') || (vetor[icont] >= 'a' && vetor[icont] <= 'z'))
        sequenciaAtual++;
      else {
        if (sequenciaAtual > maiorSequencia){
          maiorSequencia = sequenciaAtual;
          posMaiorSequencia = icont;
        }
        sequenciaAtual = 0;
      }
    }
    
    for (icont = posMaiorSequencia - maiorSequencia, jcont = 0; icont < posMaiorSequencia; icont++, jcont++)
      maiorPalavra[jcont] = vetor[icont];
    
    maiorPalavra[jcont] = '\0';
    printf("a maior palavra da string é:\n%s", maiorPalavra);
    
    return 0;
}