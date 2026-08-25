#include <stdio.h>
#define maxTam 14
#define maxMovimentos 100
#define decimal 10 // inteiros de 0 a 9

int main() {
    int icont, jcont, tam, posSequencia[maxMovimentos], sequencia[maxTam] = {9, 4, 3, 9, 1, 2, 4, 5, 1, 1, 9, 7, 0, 5}, resultado[decimal] = {0};
    tam = 0;
    
    for (icont = 0; icont < maxMovimentos; icont++){
      scanf("%i", &posSequencia[icont]);
      tam++;
      if (posSequencia[icont] <= 0 || posSequencia[icont] > maxTam)
        break;
    }
    
    for (icont = 0; icont < tam; icont++){
      jcont = 0;
      if (sequencia[posSequencia[icont] - 1] < 0)
        break;
      else if (posSequencia[icont + 1] <= 0){
        resultado[sequencia[posSequencia[icont] - 1]]++;
        break;
      }
      
      while (posSequencia[icont] + jcont != posSequencia[icont + 1]){
        resultado[sequencia[posSequencia[icont] - 1 + jcont]]++;
        if (posSequencia[icont] > posSequencia[icont + 1])
          jcont--;
        else
          jcont++;
      }
    }
    
    for (icont = 0; icont < decimal; icont++)
      printf("%i\t", resultado[icont]);
    
    return 0;
}


// solucao mt boa tbm (n fui eu)


// #include <stdio.h>
// #define maxTam 14
// #define decimal 10

// int main() {
//     int sequencia[maxTam] = {9, 4, 3, 9, 1, 2, 4, 5, 1, 1, 9, 7, 0, 5};
//     int resultado[decimal] = {0};
    
//     int posAtual, posDestino, i;
    
//     scanf("%d", &posAtual);
    
//     while (1) {
//         scanf("%d", &posDestino);
        
//         if (posDestino <= 0) {
//             resultado[sequencia[posAtual - 1]]++;
//             break;
//         }
        
//         if (posAtual < posDestino) {
//             for (i = posAtual; i < posDestino; i++) {
//                 resultado[sequencia[i - 1]]++;
//             }
//         } 

//         else {
//             for (i = posAtual; i > posDestino; i--) {
//                 resultado[sequencia[i - 1]]++;
//             }
//         }
        
//         posAtual = posDestino;
//     }
    
//     for (i = 0; i < decimal; i++) {
//         printf("%d ", resultado[i]);
//     }
//     printf("\n");
    
//     return 0;
// }