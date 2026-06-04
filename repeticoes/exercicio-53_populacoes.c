#include <stdio.h>

int main() {
    int contador;
    float populacaoA, populacaoB;
    populacaoA = 5000000;
    populacaoB = 7000000;
    
    for (contador = 0; populacaoB >= populacaoA; contador++){
      populacaoA *= 1.03;
      populacaoB *= 1.02;
    }
    printf("populacao de A = %.2f\npopulacao de B = %.2f\nAnos = %i",populacaoA, populacaoB, contador);
    
    return 0;
}


//     pais a = 5.000.000, 3% ao ano
    
//     pais b = 7.000.000, 2% ao ano
    
//     valorAnualA = 5.000.000
    
//     valorAnualB = 7.000.000