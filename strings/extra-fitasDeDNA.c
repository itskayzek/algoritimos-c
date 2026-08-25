#include <stdio.h>
#define maxTam 8 + 1 + 1 // \n e \0
#define alfaTam 26 - 6 // para o alfabeto ir ate o T
#define TRUE 1
#define FALSE 0

int main() {
    int icont, jcont, igual, qtdeMaior, frequencia[alfaTam] = {0};
    char maior, consenso[maxTam], fitaDna1[maxTam], fitaDna2[maxTam], fitaDna3[maxTam], fitaDna4[maxTam], fitaDna5[maxTam];
    qtdeMaior = 0;
    
    fgets (fitaDna1, maxTam, stdin);
    fgets (fitaDna2, maxTam, stdin);
    fgets (fitaDna3, maxTam, stdin);
    fgets (fitaDna4, maxTam, stdin);
    fgets (fitaDna5, maxTam, stdin);
     
    for (icont = 0; icont < maxTam - 2; icont++){
      igual = FALSE;
      
      frequencia[fitaDna1[icont] - 'A']++;
      frequencia[fitaDna2[icont] - 'A']++;
      frequencia[fitaDna3[icont] - 'A']++;
      frequencia[fitaDna4[icont] - 'A']++;
      frequencia[fitaDna5[icont] - 'A']++;
      
      qtdeMaior = frequencia[0];
      frequencia[0] = 0;
      maior = 'A';
      
      for (jcont = 1; jcont < alfaTam; jcont++){
        if (frequencia[jcont] > qtdeMaior){
          qtdeMaior = frequencia[jcont];
          frequencia[jcont] = 0;
          igual = FALSE;
          maior = jcont + 'A';
        }
        else if (frequencia[jcont] == qtdeMaior){
          igual = TRUE;
          frequencia[jcont] = 0;
        }
        else
          frequencia[jcont] = 0;
      }
      
      if (igual)
        consenso[icont] = '?';
      else
        consenso[icont] = maior;
    }
    consenso[icont] = '\0';
    
    printf("%s\n", consenso);
    
    return 0;
}


// EU PENSEI EM FAZER COM MATRIZ MAS ACHEI Q SÓ ESSA IDEIA SERIA MELHOR. ERA SÓ TER UNIDO AS DUAS T_T

// char fitas[5][maxTam];

// for(int i = 0; i < 5; i++) {
//     fgets(fitas[i], maxTam, stdin);
// }

// for (int linha = 0; linha < 5; linha++) {
//     frequencia[fitas[linha][icont] - 'A']++;
// }