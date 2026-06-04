#include <stdio.h>

int main() {
    int num1, divisor, num2, somaDivisores1, somaDivisores2;
    scanf("%i %i", &num1, &num2);
    somaDivisores1 = 0;
    somaDivisores2 = 0;
    
    for (divisor = 1; (divisor*2) <= num1; divisor++){
      if ((num1 % divisor) == 0)
        somaDivisores1 += divisor;
    }
    for (divisor = 1; (divisor*2) <= num2; divisor++){
      if ((num2 % divisor) == 0)
        somaDivisores2 += divisor;
    }
    if (somaDivisores1 == num2 && somaDivisores2 == num1)
      printf("%i e %i são amigos! :D", num1, num2);
    else
      printf("%i e %i não são amigos! D:", num1, num2);
    
    return 0;
}