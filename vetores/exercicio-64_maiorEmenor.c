#include <stdio.h>

int main() {
    int ligacao, contador, vetor[20];
    ligacao = 0;
        
    for (contador = 0; contador < 20; contador++)
      scanf("%i", &vetor[contador]);
    
    for (contador = 0; contador < 19; contador++){
      if (vetor[contador] > vetor[contador + 1]){
        ligacao = vetor[contador + 1];
        vetor[contador + 1] = vetor[contador];
        vetor[contador] = ligacao;
      }
    }
    for (contador = 1; contador < 19; contador++){
      if (vetor[0] > vetor[contador]){
        vetor[0] = vetor[contador];
      }
    }
    printf("%i é o menor e %i é o maior", vetor[0], vetor[19]);
    
    return 0;
}

// empolguei e quis usar algoritmo de ordenacao ;-;
// versao melhor e mais otimizada ai (n fui eu):
  

// #include <stdio.h>

// int main() {
//     int contador, vetor[20];
//     int maior, menor;
        
//     // 1. Lendo os 20 números
//     for (contador = 0; contador < 20; contador++) {
//         scanf("%i", &vetor[contador]);
//     }
    
//     // 2. Inicializando as variáveis com o primeiro elemento
//     maior = vetor[0];
//     menor = vetor[0];
    
//     // 3. Varredura linear do índice 1 até o 19
//     for (contador = 1; contador < 20; contador++) {
        
//         if (vetor[contador] > maior) {
//             maior = vetor[contador]; 
//         }
        
//         if (vetor[contador] < menor) {
//             menor = vetor[contador];
//         }
//     }
    
//     // 4. Imprimindo apenas os valores encontrados
//     printf("O menor valor e: %i\n", menor);
//     printf("O maior valor e: %i\n", maior);
    
//     return 0;
// }
