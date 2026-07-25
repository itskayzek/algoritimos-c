#include <stdio.h>
#define maxTam 200

int main() {
    int cont, contVogais;
    char vetor[maxTam];
    contVogais = 0;
    
    printf("Digite sua string: ");
    fgets (vetor, maxTam, stdin);
    
    for (cont = 0; vetor[cont] != '\0'; cont++){
      switch (vetor[cont]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          contVogais++;
        break;
      }
    }
    printf("total de vogais: %i", contVogais);
    
    return 0;
}