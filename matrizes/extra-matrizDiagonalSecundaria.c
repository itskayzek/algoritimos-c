#include <stdio.h>
#define dim 5

int main() {
    int icont, jcont, matriz[dim][dim];
    
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        if ((dim - 1) - icont == jcont)
          matriz[icont][jcont] = 1;
        else
          matriz[icont][jcont] = 0;
      }
    }
    
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        printf("%i ", matriz[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}