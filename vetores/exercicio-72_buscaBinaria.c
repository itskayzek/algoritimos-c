#include <stdio.h>
#define maxTam 10

int main() {
    int cont, fim, inicio, numero, vetor[maxTam];
    fim = maxTam - 1;
    inicio = 0;
    
    printf("Digite os valores do vetor:\n");
    for (cont = 0; cont < maxTam; cont++)
      scanf("%i", &vetor[cont]);
    printf("Digite o número a ser encontrado: ");
    scanf("%i", &numero);
    
    for (cont = (fim + inicio) / 2; inicio != fim; cont = (fim + inicio) / 2){
      if (vetor[cont] > numero)
        fim = cont - 1;
      else if (vetor[cont] < numero)
        inicio = cont + 1;
      else {
        printf("Esse número está na posição %i.", cont);
        break;
      }
    }
    if (inicio == fim){
      if (vetor[fim] == numero)
        printf("Esse número está na posição %i.", fim);
      else
        printf("-1, Esse número não está no vetor.");
    }
    
    return 0;
}

// esse codigo acima tem uns problemas, mas esse abaixo concerta os problemas ._.




// #include <stdio.h>
// #define maxTam 10

// int main() {
//     int cont, fim, inicio, numero, vetor[maxTam];
//     fim = maxTam - 1;
//     inicio = 0;
    
//     printf("Digite os valores do vetor:\n");
//     for (cont = 0; cont < maxTam; cont++)
//       scanf("%i", &vetor[cont]);
//     printf("Digite o número a ser encontrado: ");
//     scanf("%i", &numero);
    
//     for (cont = (fim + inicio) / 2; inicio <= fim; cont = (fim + inicio) / 2){
//       if (vetor[cont] > numero)
//         fim = cont - 1;
//       else if (vetor[cont] < numero)
//         inicio = cont + 1;
//       else {
//         printf("Esse número está na posição %i.", cont);
//         break;
//       }
//     }
//     if (inicio > fim)
//       printf("-1, Esse número não está no vetor.");
    
//     return 0;
// }