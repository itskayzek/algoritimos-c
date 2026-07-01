#include <stdio.h>

int main() {
    int cont, num, numImpar;
    numImpar = 1;
    scanf("%i", &num);
    
    for (cont = 0; num > 0; cont++){
      num = num - numImpar;
      numImpar += 2;
    }
    printf("%i", cont);
    
    return 0;
}