#include <stdio.h>

int main() {
    int num;
    scanf("%i", &num);
    
    if (num % 100 == 0 && num % 400 != 0)
      printf("%i naum é bissexto.", num);
    else if (num % 100 != 0 && num % 400 != 0 && num % 4 != 0)
      printf("%i naum é bissexto.", num);
    else
      printf("%i é bissexto.", num);
    
    return 0;
}