#include <stdio.h>

int main() {
    int num1, num2, divisoes;
    scanf("%i %i", &num1, &num2);
    for (divisoes = 0; num1 >= num2; divisoes++)
      num1 = num1 - num2;
      
    printf("%i", divisoes);
  return 0;
}