#include <stdio.h>
#define maxTam 202 // max de 200 caracteres

int main() {
    int icont, jcont;
    char invertido[maxTam], texto[maxTam];
    
    printf("Digite sua string: ");
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; texto[icont] != '\0'; icont++){
    }
    icont -= 2;
    
    for (jcont = 0; icont >= 0; jcont++, icont--)
      invertido[jcont] = texto[icont];
    invertido[jcont] = '\0';
    
    printf("%s", invertido);
    
    return 0;
}