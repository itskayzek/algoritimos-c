#include <stdio.h>

int main() {
    int contador, vetor3[10], vetor2[10], vetor1[10];
    
    for (contador = 0; contador < 10; contador++)
      scanf("%i", &vetor1[contador]);
    printf("-----\n"); // para separar visualmente o resultado dos scanf
    for (contador = 0; contador < 10; contador++)
      scanf("%i", &vetor2[contador]);
    
    for (contador = 0; contador < 10; contador++){
      if (vetor1[contador] >= vetor2[contador])
        vetor3[contador] = vetor1[contador];
      else
        vetor3[contador] = vetor2[contador];
    }
    // coloquei o printf fora por questao das etapas de processamento e organizacao msm
    for (contador = 0; contador < 10; contador++)
      printf("%i ", vetor3[contador]);
    
    return 0;
}


// oq eu achei que o problema era o_O (culpa do enunciado):


// #include <stdio.h>

// int main() {
//     int contador, maior1, maior2, posicaoMaior1, posicaoMaior2, vetor3[10], vetor2[10], vetor1[10];
//     posicaoMaior1 = 0;
//     posicaoMaior2 = 0;
    
//     for (contador = 0; contador < 10; contador++)
//       scanf("%i", &vetor1[contador]);
//     printf("-----\n"); //para separar visualmente o resultado dos scanf
//     for (contador = 0; contador < 10; contador++)
//       scanf("%i", &vetor2[contador]);
    
//     maior1 = vetor1[0];
//     maior2 = vetor2[0];
    
//     for (contador = 0; contador < 10; contador++)
//       vetor3[contador] = 0;
    
//     for (contador = 1; contador < 10; contador++){
//       if (vetor1[posicaoMaior1] < vetor1[contador]){
//         posicaoMaior1 = contador;
//         maior1 = vetor1[contador];
//       }
//       if (vetor2[posicaoMaior2] < vetor2[contador]){
//         posicaoMaior2 = contador;
//         maior2 = vetor2[contador];
//       }
//     }
    
//     vetor3[posicaoMaior1] = maior1;
//     vetor3[posicaoMaior2] = maior2;
//     if (posicaoMaior1 == posicaoMaior2)
//       printf("a posição dos maiores valores são iguais, então, só para informar, %i é o valor maior do vetor1\n", maior1);
    
//     for (contador = 0; contador < 10; contador++)
//       printf("%i ", vetor3[contador]);
    
//     return 0;
// }