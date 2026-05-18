#include <stdio.h>

int main() {
    int num, dezena, unidade;
    scanf("%i", &num);
    
    dezena = num / 10;
    unidade = num % 10;
    
    if (num == 100)
      printf("Cem");
    else if (num == 10)
      printf("Dez");
    
    else if (dezena != 1){
    switch (dezena) {
      case 2: printf("Vinte"); break;
      case 3: printf("Trinta"); break;
      case 4: printf("Quarenta"); break;
      case 5: printf("Cinquenta"); break;
      case 6: printf("Sessenta"); break;
      case 7: printf("Setenta"); break;
      case 8: printf("Oitenta"); break;
      case 9: printf("Noventa"); break;
      }
    }
    
    if (dezena > 1 && unidade != 0)
      printf(" e ");
    
    if (dezena != 1) {
    switch (unidade) {
      case 1: printf("Um"); break;
      case 2: printf("Dois"); break;
      case 3: printf("Tres"); break;
      case 4: printf("Quatro"); break;
      case 5: printf("Cinco"); break;
      case 6: printf("Seis"); break;
      case 7: printf("Sete"); break;
      case 8: printf("Oito"); break;
      case 9: printf("Nove"); break;
      }
    }
    
    else
    switch (unidade) {
      case 1: printf("Onze"); break;
      case 2: printf("Doze"); break;
      case 3: printf("Treze"); break;
      case 4: printf("Catorze"); break;
      case 5: printf("Quinze"); break;
      case 6: printf("Dezesseis"); break;
      case 7: printf("Dezessete"); break;
      case 8: printf("Dezoito"); break;
      case 9: printf("Dezenove"); break;
      }
    
    return 0;
}