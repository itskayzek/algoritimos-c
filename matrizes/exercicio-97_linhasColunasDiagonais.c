#include <stdio.h>
#define lin 5
#define col 5

int main() {
    int icont, jcont, valorX, valorY, ligacao;
    int matriz[lin][col] = {
    {1, 9, 0, 4, 3},
    {7, 2, 5, 8, 0},
    {6, 3, 9, 1, 4},
    {0, 5, 8, 2, 7},
    {4, 6, 3, 9, 1}, };
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         printf("%i\t", matriz[icont][jcont]);
//       }
//       printf("\n");
//     }
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        scanf("%i", &matriz[icont][jcont]);
        printf("%i\t", matriz[icont][jcont]);
      }
      printf("\n");
    }
    
    printf("\nDigite dois valores para a inversão das linhas, colunas e diagonais: ");
    scanf("%i %i", &valorX, &valorY);
    printf("\n");
    valorX--;
    valorY--;
    
    for (jcont = 0; jcont < col; jcont++){
      ligacao = matriz[valorY][jcont];
      matriz[valorY][jcont] = matriz[valorX][jcont];
      matriz[valorX][jcont] = ligacao;
    }
//     for (icont = 0; icont < lin; icont++){ 
//       for (jcont = 0; jcont < col; jcont++){
//         printf("%i\t", matriz[icont][jcont]);
//       }
//       printf("\n");
//     }
//     printf("\n");
    
    for (icont = 0; icont < lin; icont++){
      ligacao = matriz[icont][valorY];
      matriz[icont][valorY] = matriz[icont][valorX];
      matriz[icont][valorX] = ligacao;
    }
//     for (icont = 0; icont < lin; icont++){ 
//       for (jcont = 0; jcont < col; jcont++){
//         printf("%i\t", matriz[icont][jcont]);
//       }
//       printf("\n");
//     }
//     printf("\n");
    
    for (icont = 0; icont < lin; icont++){
      ligacao = matriz[icont][lin - 1 - icont];
      matriz[icont][lin - 1 - icont] = matriz[icont][icont];
      matriz[icont][icont] = ligacao;
    }
    
    for (icont = 0; icont < lin; icont++){ 
      for (jcont = 0; jcont < col; jcont++){
        printf("%i\t", matriz[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}