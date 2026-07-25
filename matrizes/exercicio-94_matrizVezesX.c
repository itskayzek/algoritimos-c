#include <stdio.h>
#define lin 6
#define col 6

int main() {
    int icont, jcont, valorX;
    int matriz[lin][col] = {
    {3, 7, 8, 5, 1, 3},
    {7, 6, 9, 2, 5, 1},
    {8, 9, 7, 4, 0, 7},
    {5, 2, 4, 3, 6, 5},
    {1, 5, 0, 6, 0, 4},
    {6, 7, 2, 1, 8, 3}, };
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf("%i", &matriz[icont][jcont]);
//       }
//     }
    
    printf("Digite um valor: ");
    scanf("%i", &valorX);
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        matriz[icont][jcont] *= valorX;
        printf("%i\t", matriz[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}