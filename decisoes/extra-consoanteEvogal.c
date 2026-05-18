#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch(letra){    
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        printf("Esta letra é uma vogal.");
        break;
      default:
        printf("Esta letra é uma consoante.");
    }        
    return 0;
}