#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
    int jcont, icont, kcont, ehLatino, dim;
    ehLatino = TRUE;
    printf("Digite a dimensão do seu Quadrado Latino: ");
    scanf("%i", &dim);
    
    int matriz[dim][dim]; //= {
//     {1, 2, 3,},
//     {2, 3, 1,},
//     {3, 1, 2,}, };
    
    printf("Digite os valores da sua matriz: ");
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        scanf("%i", &matriz[icont][jcont]);
        if (matriz[icont][jcont] > dim || matriz[icont][jcont] <= 0){
          printf("Valor inválido! Digite novamente outro valor!\n");
          jcont--;
        }
      }
      printf("\n");
    }
    
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim - 1; jcont++){
        for (kcont = jcont + 1; kcont < dim; kcont++){
          if (matriz[icont][jcont] == matriz[icont][kcont] || matriz[jcont][icont] == matriz[kcont][icont]){
            ehLatino = FALSE;
            break;
          }
        }
        if (ehLatino == FALSE)
          break;
      }
      if (ehLatino == FALSE)
        break;
    }
    
    if (ehLatino == TRUE)
      printf("Essa matriz é um Quadrado Latino!\n");
    else
      printf("Essa matriz não é um Quadrado Latino.\n");
    
    return 0;
}