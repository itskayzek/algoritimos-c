#include <stdio.h>
#define lin 3
#define col 4

int main() {
    int icont, jcont;
    int matrizDaSoma[lin][col], matrizDaDiferenca[lin][col];
    int matriz1[lin][col] = {
    {3, 0, 9, 2},
    {5, 8, 1, 4},
    {7, 6, 2, 0}, };
     
    int matriz2[lin][col] = {
    {3, 7, 8, 5,},
    {7, 6, 9, 2,},
    {8, 9, 7, 4,}, };
    
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf("%i", &matriz1[icont][jcont]);
//         scanf("%i", &matriz2[icont][jcont]);
//       }
//     }
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        matrizDaSoma[icont][jcont] = matriz1[icont][jcont] + matriz2[icont][jcont];
        matrizDaDiferenca[icont][jcont] = matriz1[icont][jcont] - matriz2[icont][jcont];
      }
    }
    
    printf("Esses são os valores da soma:\n");
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        printf("%i\t", matrizDaSoma[icont][jcont]);
      }
      printf("\n");
    }
    
    printf("\nEsses são os valores da diferença:\n");
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        printf("%i\t", matrizDaDiferenca[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}