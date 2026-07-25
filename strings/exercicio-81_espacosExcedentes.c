#include <stdio.h>
#define maxTam 201

int main() {
    int cont, espacos, pulos;
    char strNormalizada[maxTam], vetor[maxTam];
    espacos = 1;
    pulos = 0;
    
    fgets (vetor, maxTam, stdin);
    
    for (cont = 0; vetor[cont] != '\0'; cont++){
      if (vetor[cont] != ' '){
        strNormalizada[cont - pulos] = vetor[cont];
        espacos = 0;
      }
      else if (espacos == 0){
        espacos++;
        strNormalizada[cont - pulos] = vetor[cont];
      }
      else if (espacos > 0)
        pulos++;
    }
    strNormalizada[cont - pulos] = '\0';
    
    printf("string normalizada:\n%s", strNormalizada);
    
    return 0;
}