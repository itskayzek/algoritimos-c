#include <stdio.h>

int main() {
    int contador;
    float soma, vetor2[10], vetor1[10];
        
    for (contador = 0; contador < 10; contador++)
      scanf("%f", &vetor1[contador]);
    printf("----\n"); //uns underlinezinho só para ver quando acaba um scanf
    for (contador = 0; contador < 10; contador++)
      scanf("%f", &vetor2[contador]);
    
    for (contador = 0; contador < 10; contador++){
      soma = vetor1[contador] + vetor2[contador];
      printf("%.2f ", soma);
    }
    
    return 0;
}