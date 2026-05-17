#include <stdio.h>

int main() {
    int dia;
    scanf("%i", &dia);
    
    switch (dia){
    case 1: printf("É domingo!"); break;
    case 2: printf("É segunda!"); break;
    case 3: printf("É terça!"); break;
    case 4: printf("É quarta!"); break;
    case 5: printf("É quinta!"); break;
    case 6: printf("É sexta!"); break;
    case 7: printf("É sábado!"); break;
    default:
      printf("Valor inválido!");
      }
  return 0;
}