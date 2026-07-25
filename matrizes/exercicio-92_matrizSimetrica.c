#include <stdio.h>
#define lin 5
#define col 5

int main() {
    int icont, jcont, simetria;
    int matriz[lin][col] = {
    {3, 7, 8, 5, 1},
    {7, 6, 9, 2, 5},
    {8, 9, 7, 4, 0},
    {5, 2, 4, 3, 6},
    {1, 5, 0, 6, 0}, };
    simetria = 1;
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf("%i", &matriz[icont][jcont]);
//       }
//     }
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){ // aq poderia ser jcont = icont + 1 pq por exemplo, quando testa [0][2], ele ja testa o [2][0]
        if (matriz[icont][jcont] != matriz[jcont][icont]){
          simetria--;
          break; // esse break n sai do 1° for, teria q ter uma condicao dps do 2° for para ver se simetria está abaixo
        }
      }
    }
    
    if (simetria > 0)
      printf("A matriz é simétrica!!");
    else
      printf("A matriz não é simétrica.");
    
    return 0;
}