#include <stdio.h>
#define maxTam 201

int main() {
    int cont, ocorrencias;
    char caractere, vetor[maxTam];
    ocorrencias = 0;
    
    printf("Digite sua string: ");
    fgets (vetor, maxTam, stdin);

    printf("Digite seu caractere: ");
    scanf(" %c", &caractere);
    
    for (cont = 0; vetor[cont] != '\0'; cont++){
      if (caractere == vetor[cont])
        ocorrencias++;
    }
    printf("houve %i ocorrencias", ocorrencias);
    
    return 0;
}