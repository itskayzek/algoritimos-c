#include <stdio.h>
#define maxTam 15

int main() {
    int cont, ligacao, controle, vetor[maxTam];
    controle = 0;
    for(cont = 0; cont < maxTam; cont++)
      scanf("%i", &vetor[cont]);
    
    while (controle < maxTam - 1){
      controle = 0;
      for (cont = 0; cont < maxTam - 1; cont++){
        if (vetor[cont] > vetor[cont + 1]){
          ligacao = vetor[cont + 1];
          vetor[cont + 1] = vetor[cont];
          vetor[cont] = ligacao;
        }   cont = 1
        else
          controle++;
      }
    }
    for (cont = 0; cont < maxTam; cont++)
      printf("%i ", vetor[cont]);
    
    return 0;
}



// alternativa classica com 2 for:

  
// #include <stdio.h>
// #define maxTam 15

// int main() {
//     int cont1, cont2, ligacao, vetor[maxTam];
//     int houveTroca; // Nossa variável de controle simplificada

//     // Leitura
//     for(cont1 = 0; cont1 < maxTam; cont1++)
//       scanf("%i", &vetor[cont1]);
    
//     // O laço de fora controla quantas rodadas vamos dar
//     for (cont1 = 0; cont1 < maxTam - 1; cont1++) {
//       houveTroca = 0; // Começamos a rodada assumindo que não haverá trocas
      
//       // O SEGREDO: O limite diminui a cada rodada (- cont1)
//       for (cont2 = 0; cont2 < maxTam - 1 - cont1; cont2++) {
        
//         if (vetor[cont2] > vetor[cont2 + 1]) {
//           // Troca de lugares
//           ligacao = vetor[cont2 + 1];
//           vetor[cont2 + 1] = vetor[cont2];
//           vetor[cont2] = ligacao;
          
//           houveTroca = 1; // Avisamos que mexemos em algo!
//         }
//       }
      
//       // Se rodou o laço interno inteiro e não trocou nada, já está ordenado!
//       if (houveTroca == 0) {
//         break;
//       }
//     }
    
//     // Impressão
//     for (cont1 = 0; cont1 < maxTam; cont1++)
//       printf("%i ", vetor[cont1]);
    
//     return 0;
// }