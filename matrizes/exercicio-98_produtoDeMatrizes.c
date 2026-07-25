#include <stdio.h>
#define lin4x3 4
#define col4x3 3

#define lin3x2 3
#define col3x2 2

#define linProd 4
#define colProd 2

int main() {
    int icont, jcont, kcont, lcont, matrizProduto[linProd][colProd] = {0};
    int matriz_4x3[lin4x3][col4x3] = {
    {5, 3, 8},
    {1, 0, 6},
    {2, 9, 4},
    {7, 5, 3}, };
    
    int matriz_3x2[lin3x2][col3x2] = {
    {2, 7},
    {0, 4},
    {9, 1}, };
    
//     printf("Digite os valores da primeira matriz: ");
//     for (icont = 0; icont < lin4x3; icont++){
//       for (jcont = 0; jcont < col4x3; jcont++){
//         scanf("%i", &matriz_4x3[icont][jcont]);
//       }
//     }
    
//     printf("Digite os valores da segunda matriz: ");
//     for (icont = 0; icont < lin3x2; icont++){
//       for (jcont = 0; jcont < col3x2; jcont++){
//         scanf("%i", &matriz_3x2[icont][jcont]);
//       }
//     }
    
    for (icont = 0; icont < lin4x3; icont++){
      for (lcont = 0; lcont < col3x2; lcont++){
        for (jcont = 0, kcont = 0; jcont < col4x3 || kcont < lin3x2; jcont++, kcont++){
          matrizProduto[icont][lcont] += (matriz_4x3[icont][jcont] * matriz_3x2[kcont][lcont]);
        }
      }
    }
    
    printf("A matriz resultante do produto das duas matrizes é:\n");
    for (icont = 0; icont < linProd; icont++){
      for (jcont = 0; jcont < colProd; jcont++){      
        printf("%i\t", matrizProduto[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}