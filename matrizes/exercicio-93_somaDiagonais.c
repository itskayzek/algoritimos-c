#include <stdio.h>
#define lin 5
#define col 5

int main() {
    int icont, jcont, somaDiagPrincipal, somaDiagSecundaria;
    int matriz[lin][col] = {
    {3, 7, 8, 5, 1},
    {7, 6, 9, 1, 5},
    {8, 9, 7, 4, 0},
    {5, 2, 4, 3, 6},
    {1, 5, 0, 6, 1}, };
    somaDiagPrincipal = 0;
    somaDiagSecundaria = 0;
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf("%i", &matriz[icont][jcont]);
//       }
//     }
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        if (icont == jcont)
          somaDiagPrincipal += matriz[icont][jcont];
        if ((icont + jcont) + 1 == lin)
          somaDiagSecundaria += matriz[icont][jcont];
      }
    }
    
    printf("Essa é a soma da diagonal principal: %i\n", somaDiagPrincipal);
    printf("E essa é a soma da diagonal secundária: %i\n", somaDiagSecundaria);
    
    return 0;
}


// uma versao desse codigo com 1 for :O

// #include <stdio.h>
// #define lin 5
// #define col 5

// int main() {
//     int i, somaDiagPrincipal = 0, somaDiagSecundaria = 0;
//     int matriz[lin][col] = {
//         {3, 7, 8, 5, 1},
//         {7, 6, 9, 1, 5},
//         {8, 9, 7, 4, 0},
//         {5, 2, 4, 3, 6},
//         {1, 5, 0, 6, 1}
//     };
    
//     // A MÁGICA: Apenas um laço de repetição!
//     for (i = 0; i < lin; i++) {
//         // Pega o elemento da diagonal principal direto na veia
//         somaDiagPrincipal += matriz[i][i];
        
//         // Pega o elemento da diagonal secundária usando a sua lógica matemática otimizada
//         somaDiagSecundaria += matriz[i][lin - 1 - i];
//     }
    
//     printf("Essa é a soma da diagonal principal: %i\n", somaDiagPrincipal);
//     printf("E essa é a soma da diagonal secundária: %i\n", somaDiagSecundaria);
    
//     return 0;
// }