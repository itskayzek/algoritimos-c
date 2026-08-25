#include <stdio.h>
#define dim 6

int main() {
    int icont, jcont, kcont, tamRegiao, dimRegiao, passo, filtro, maior;
    
//     printf("Digite um valor para as dimensões da sua matriz: ");
//     scanf("%i", &dim);
    int matriz[dim][dim] = {
    {4, 8, 1, 5, 0, 9},
    {3, 7, 2, 6, 8, 1},
    {9, 0, 4, 3, 5, 7},
    {1, 6, 8, 2, 9, 0},
    {5, 2, 0, 7, 4, 3},
    {8, 9, 3, 1, 6, 2}, };
    
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        printf("%i\t", matriz[icont][jcont]);//scanf("%i", &matriz[icont][jcont]);
      }
      printf("\n");
    }
    
    printf("Digite um valor para as dimensões do seu filtro: ");
    scanf("%i", &filtro);
    int maioresRegioes[filtro*filtro], resultado[filtro][filtro];
    
    if (dim % filtro != 0)
      printf("Erro! Valores incorretos.");
    else {
      passo = dim / filtro;
      dimRegiao = 0;
      icont = 0;
      jcont = 0;
      kcont = 0;
      while (dimRegiao < dim){
        maior = matriz[icont][0];
        tamRegiao = 0;
        
        for (jcont = 0; jcont < dim; jcont++){
          for (icont = dimRegiao; icont < dimRegiao + passo; icont++){
            if (matriz[icont][jcont] > maior)
              maior = matriz[icont][jcont];
          }
          tamRegiao++;
          if (tamRegiao == passo && jcont < dim - 1){
            maioresRegioes[kcont] = maior;
            kcont++;
            maior = matriz[icont - 1][jcont + 1];
            tamRegiao = 0;
          }
        }
        dimRegiao += passo;
        maioresRegioes[kcont] = maior;
        kcont++;
      }
      kcont = 0;
      for (icont = 0; icont < filtro; icont++){
        for (jcont = 0; jcont < filtro; jcont++, kcont++){
          resultado[icont][jcont] = maioresRegioes[kcont];
          printf("%i\t", resultado[icont][jcont]);
        }
        printf("\n");
      }
    }
    
    return 0;
}