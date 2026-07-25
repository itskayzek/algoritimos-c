#include <stdio.h>
#define maxTam 201

int main() {
    int cont;
    char texto[maxTam];
    
    fgets (texto, maxTam, stdin);    
    
    for (cont = 0; texto[cont] != '\0'; cont++){
      if (texto[cont] >= 'a' && texto[cont] <= 'z')
        texto[cont] -= 32;
    }
    printf("%s", texto);
    
    return 0;
}
    