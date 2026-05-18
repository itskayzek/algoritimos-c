#include <stdio.h>

int main() {
    int dia;
    scanf("%i", &dia);
    if (dia == 1)
      printf("É domingo!"); 
    
      else if (dia == 2)
      printf("É segunda!");

      else if (dia == 3)
      printf("É terça!");

      else if (dia == 4)
      printf("É quarta!");

      else if (dia == 5)
      printf("É quinta!"); 

      else if (dia == 6)  
      printf("É sexta!");

      else if (dia == 7)
      printf("É sábado!");
      else
      printf("Este número não está entre 1 e 7.");
  return 0;
}