#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite 3 números: ");
    scanf("%i %i %i", &num1, &num2, &num3);
    if (num1 > num2)
    {
      if (num1 > num3)
      {
        printf("%i é o maior", num1);
      }
      else
        printf("%i é o maior", num3);
    }

    else if (num2 > num3)
    {
      printf("%i é o maior", num2);
    }
    else if (num3 > num2)
      printf("%i é o maior", num3);
    else if (num1 == num2)
    {
      if (num2 == num3)
      {
        printf("Todos são iguais!");
      }
    }
    else
      printf("%i é maior", num2);
    return 0;
}