#include <stdio.h>

int main() {
    int anos;
    float ze, chico;
    ze = 1.10;
    chico = 1.50;
    
    for (anos = 0; ze <= chico; anos++){
      ze += 0.03;
      chico += 0.02;
    }
    printf("%i", anos);
    
    return 0;
}