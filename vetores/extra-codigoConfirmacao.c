#include <stdio.h>
#define digitosFinais 4
#define HHMM 4
#define codigoTam 4

int main() {
    int icont, base, baseReversa, ligacao, finalCartao, tempTransacao, codConfirmacao;
    int numCartao[digitosFinais], horario[HHMM];
    codConfirmacao = 0;
    
    printf("Digite os ultimos 4 números finais do cartão: ");
    scanf("%i", &finalCartao);
    
    printf("Digite o horario da transação: ");
    scanf("%i", &tempTransacao);
    
    for (icont = 0, base = 1000, baseReversa = 1; icont < digitosFinais; icont++, base /= 10, baseReversa *= 10){
      numCartao[icont] = finalCartao / base;
      finalCartao %= base;
      
      horario[icont] = tempTransacao / base;
      tempTransacao %= base;
      
      if (numCartao[icont] < horario[icont]){
        ligacao = numCartao[icont];
        numCartao[icont] = horario[icont];
        horario[icont] = ligacao;
      }
      codConfirmacao += (baseReversa * (numCartao[icont] - horario[icont]));
    }
    
    printf("\nO código é: %i", codConfirmacao);
    
    return 0;
}



// quando fiz o codigo acima nem percebi q dava
// para fazer sem vetor kk ._.

// #include <stdio.h>
// #define codigoTam 4

// int main() {
//     int icont, base, baseReversa, ligacao, finalCartao, tempTransacao, codConfirmacao;
//     int numCartao, horario;
//     codConfirmacao = 0;
    
//     printf("Digite os ultimos 4 números finais do cartão: ");
//     scanf("%i", &finalCartao);
    
//     printf("Digite o horario da transação: ");
//     scanf("%i", &tempTransacao);
    
//     for (icont = 0, base = 1000, baseReversa = 1; icont < codigoTam; icont++, base /= 10, baseReversa *= 10){
//       numCartao = finalCartao / base;
//       finalCartao %= base;
      
//       horario = tempTransacao / base;
//       tempTransacao %= base;
      
//       if (numCartao < horario){
//         ligacao = numCartao;
//         numCartao = horario;
//         horario = ligacao;
//       }
//       codConfirmacao += (baseReversa * (numCartao - horario));
//     }
    
//     printf("\nO código é: %i", codConfirmacao);
    
//     return 0;
// }