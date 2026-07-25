#include <stdio.h>
#define dim 10

int main() {
    int icont, jcont, numUmLinha, numUmColuna;
     int matriz[dim][dim]; //= {
//     {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
//     {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
//     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//     {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//     {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
//     {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
//     {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
//     {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//     {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//     {0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, };
    
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        scanf("%i", &matriz[icont][jcont]);
      }
    }
    
    for (icont = 0; icont < dim; icont++){
      numUmLinha = 0;
      numUmColuna = 0;
      for (jcont = 0; jcont < dim; jcont++){
        if (matriz[icont][jcont] == 1)
          numUmLinha++;
        if (matriz[jcont][icont] == 1)
          numUmColuna++;
        
        if (matriz[icont][jcont] != 1 && matriz[icont][jcont] != 0){
          numUmLinha = 2; // a anomalia poderia ser representada como 0 ou -1 mas o 0 ja faz parte do contexto de outra forma e o 1 tbm, apesar da anomalia ser negativa, mas pode confundir ._.
          break;
        }
        else if (matriz[jcont][icont] != 1 && matriz[jcont][icont] != 0){
          numUmColuna = 2;
          break;
        }
      }
      if (numUmLinha != 1 || numUmColuna != 1)
        break;
    }
    
    if (numUmLinha != 1 || numUmColuna != 1)
      printf("Essa não é uma matriz de permutação.");
    else
      printf("Essa é uma matriz de permutação!");
    
    return 0;
}