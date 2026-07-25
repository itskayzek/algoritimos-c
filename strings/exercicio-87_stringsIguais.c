#include <stdio.h>
#define maxTam 202 //max real de 200 caracteres
#define TRUE 1
#define FALSE 0

int main() {
    int cont, diferenca;
    char string1[maxTam], string2[maxTam];
    diferenca = FALSE;
    
    fgets (string1, maxTam, stdin);
    fgets (string2, maxTam, stdin);
    
    for (cont = 0; string1[cont] != '\0'; cont++){
      if (string1[cont] <= 'Z' && string1[cont] >= 'A')
        string1[cont] += 32;
      
      if (string2[cont] <= 'Z' && string2[cont] >= 'A')
        string2[cont] += 32;
      
      if (string1[cont] != string2[cont]){
        diferenca = TRUE;
        break;
      }
    }
    
    if (diferenca == TRUE)
      printf("As strings são diferentes!");
    else
      printf("As strings são iguais");
    
    return 0;
}