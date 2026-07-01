#include <stdio.h>

int main() {
    int i, iAtual, iOriginal, j, jAtual, jOriginal, m;
    scanf("%i %i %i", &iOriginal, &jOriginal, &m);
    
    for (iAtual = 1; iAtual <= iOriginal; iAtual++){
      for (jAtual = 1; jAtual <= jOriginal; jAtual++){
        if (iAtual % m == jAtual % m)
          printf("-> %i e %i\n\n", iAtual, jAtual);
      }
    }
    
    return 0;
}