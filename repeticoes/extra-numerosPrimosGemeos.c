#include <stdio.h>

int main() {
    int num, num2, cont, divisor, limite;
    num = 4;
    scanf("%i", &limite);
    
    for (cont = 0; cont < limite; cont++){
      num++;
      for (divisor = 2; divisor < num - 2; divisor++){
        if (num % divisor == 0 || (num - 2) % divisor == 0){
          num++;
          divisor = 1;
        }
      }
      num2 = num - 2;
      printf("%i - %i\n", num2, num);
    }
    
    return 0;
}