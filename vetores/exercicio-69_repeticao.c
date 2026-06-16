#include <stdio.h>
#define maxTam 15

int main() {
    int contador, repeticao, numero, vetor[maxTam];
    repeticao = 0;
    printf("Informe os valores do vetor: ");
    for (contador = 0; contador < maxTam; contador++)
      scanf("%i", &vetor[contador]);
      
    printf("Digite um número para saber quantas vezes ele está no vetor: ");
    scanf("%i", &numero);
    
    for (contador = 0; contador < maxTam; contador++){
      if (vetor[contador] == numero)
        repeticao++;
    }
    
    if (repeticao > 0)
      printf("Esse número aparece %i vezes no vetor.", repeticao);
    else
      printf("Esse número não aparece no vetor :/");
    
    return 0;
}