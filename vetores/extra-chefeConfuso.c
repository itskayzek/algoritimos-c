#include <stdio.h>
#define maxTam 10

int main() {
    int icont, jcont, soma, vetor[maxTam];
    soma = 0;
    for (icont = 0; icont < maxTam; icont++)
      vetor[icont] = 0;
    
    for (icont = 0; icont < maxTam; icont++){
      scanf("%i", &vetor[icont]);
      if (vetor[icont] <= -1)
        break;
      else if (vetor[icont] == 0){
        jcont = icont;
        while (vetor[jcont] == 0){
          jcont--;
        }
        soma -= vetor[jcont];
        vetor[jcont] = 0;
      }
      else
        soma += vetor[icont];
    }
    printf("a soma é: %i", soma);
    
    return 0;
}

// alternativa mior:


// #include <stdio.h>
// #include <stdlib.h>

// #define TAM 10

// int main()
// {
//     int valores[TAM];
//     int v;
//     int pxl = 0;
//     printf("Informe um valor: ");
//     scanf("%d", &v);
//     while (v >= 0)
//     {
//         if (v == 0)
//         {
//             pxl = pxl - 1;
//         }
//         else
//         {
//             valores[pxl] = v;
//             pxl = pxl + 1;
//         }
//         printf("Informe um valor: ");
//         scanf("%d", &v);
//     }
//     int soma = 0;
//     for(int p =0; p < pxl; p = p +1){
//         soma = soma + valores[p];
//     }
//     printf("Resultado = %d\n", soma);
// }