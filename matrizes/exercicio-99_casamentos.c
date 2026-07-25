#include <stdio.h>
#define idadeMin 0
#define idadeMax 13
#define idadeMinReal 18
#define idadeMaxReal 30

int main() {
    int icont, jcont, somaFreqCasamento, maiorFreqCasamentoHom, idMaisFreqHom, maiorFreqCasamentoMul, idMaisFreqMul, maiorFreqCasamentoComb, combMaisFreqHom, combMaisFreqMul;
    
    int freqCasamento[idadeMax][idadeMax] = {
    {3, 7, 0, 8, 4, 1, 9, 2, 5, 6, 8, 0, 4},
    {9, 1, 5, 2, 7, 3, 0, 8, 4, 6, 1, 9, 5},
    {2, 6, 8, 4, 0, 9, 1, 5, 3, 7, 0, 2, 8},
    {5, 0, 3, 9, 6, 8, 4, 1, 7, 2, 9, 3, 1},
    {8, 4, 1, 7, 2, 5, 3, 9, 0, 8, 6, 4, 7},
    {0, 9, 7, 3, 5, 6, 8, 2, 1, 4, 3, 5, 9},
    {6, 2, 4, 1, 8, 0, 7, 3, 9, 5, 2, 8, 0},
    {1, 8, 9, 5, 3, 4, 2, 7, 6, 0, 5, 1, 3},
    {4, 3, 2, 0, 9, 7, 5, 6, 8, 1, 7, 9, 2},
    {7, 5, 6, 8, 1, 2, 9, 0, 4, 3, 8, 6, 1},
    {3, 1, 0, 6, 4, 8, 7, 5, 2, 9, 4, 0, 5},
    {9, 8, 5, 2, 7, 1, 0, 4, 3, 6, 1, 7, 8},
    {2, 7, 8, 3, 0, 9, 6, 1, 5, 4, 9, 2, 0}, };
    
    maiorFreqCasamentoHom = 0;
    maiorFreqCasamentoMul = 0;
    maiorFreqCasamentoComb = 0;
    somaFreqCasamento = 0;
    
//     for (icont = idadeMin; icont < idadeMax; icont++){
//       for (jcont = idadeMin; jcont < idadeMax; jcont++){
//         scanf("%i", &freqCasamento[icont][jcont]);
//         if (freqCasamento[icont][jcont] < 0){
//           printf("Valor inválido! Digite novamente:\n");
//           jcont--;
//         }
//       }
//     }
    
    for (icont = idadeMin; icont < idadeMax; icont++){
      for (jcont = idadeMin; jcont < idadeMax; jcont++){
        somaFreqCasamento += freqCasamento[icont][jcont];
      }
      if (somaFreqCasamento > maiorFreqCasamentoHom){
        maiorFreqCasamentoHom = somaFreqCasamento;
        idMaisFreqHom = icont;
      }
      somaFreqCasamento = 0;
    }
    
    for (jcont = idadeMin; jcont < idadeMax; jcont++){
      for (icont = idadeMin; icont < idadeMax; icont++){
        somaFreqCasamento += freqCasamento[icont][jcont];
      }
      if (somaFreqCasamento > maiorFreqCasamentoMul){
        maiorFreqCasamentoMul = somaFreqCasamento;
        idMaisFreqMul = jcont;
      }
      somaFreqCasamento = 0;
    }
    
    for (icont = idadeMin; icont < idadeMax; icont++){
      for (jcont = idadeMin; jcont < idadeMax; jcont++){
        if (freqCasamento[icont][jcont] > maiorFreqCasamentoComb){
          maiorFreqCasamentoComb = freqCasamento[icont][jcont];
          combMaisFreqHom = icont;
          combMaisFreqMul = jcont;
        }
      }
    }
    
    idMaisFreqHom += idadeMinReal;
    idMaisFreqMul += idadeMinReal;
    combMaisFreqHom += idadeMinReal;
    combMaisFreqMul += idadeMinReal; 
    
    printf("A idade mais frequente de casamento dos homens é %i\n", idMaisFreqHom);
    printf("A idade mais frequente de casamento das mulheres é %i\n", idMaisFreqMul);
    printf("A combinação mais frequente de idade de casamento é %i e %i\n", combMaisFreqHom, combMaisFreqMul);
    
    return 0;
}