#include <stdio.h>
#define lin 6
#define col 6
#define maxTam 36

int main() {
    int icont, jcont, kcont, vetor[maxTam];
    int matriz[lin][col] = {
    {3, 7, 8, 5, 1, 3},
    {7, 6, 9, 2, 5, 1},
    {8, 9, 7, 4, 0, 7},
    {5, 2, 4, 3, 6, 5},
    {1, 5, 0, 6, 0, 4},
    {6, 7, 2, 1, 8, 3}, };
    kcont = 0;
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf("%i", &matriz[icont][jcont]);
//       }
//     }
    
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++, kcont++){
        vetor[kcont] = matriz[icont][jcont];
      }
    }
    
    for (kcont = 0; kcont < maxTam; kcont++)
      printf("%i\t", vetor[kcont]);
    
    return 0;
}