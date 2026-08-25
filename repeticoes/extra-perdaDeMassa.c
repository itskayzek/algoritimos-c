#include <stdio.h>

int main() {
    int tempo;
    float massaInicial, massaDesejada;
    tempo = 0;
    
    printf("Digite o valor inicial da massa: ");
    scanf("%f", &massaInicial);
    
    printf("Digite o valor final desejado da massa: ");
    scanf("%f", &massaDesejada);

    while (massaInicial > massaDesejada){
      massaInicial -= (massaInicial * 0.1);
      if (massaInicial >= massaDesejada)
        tempo++;
    }
    
    printf("O tempo necessário foi: %i min", tempo);
    
    return 0;
}



// fiz essa daqui inicialmente mas acho q a de cima é melhor para esse caso

// #include <stdio.h>

// int main() {
//     int tempo;
//     float massaInicial, massaDesejada;
    
//     printf("Digite o valor inicial da massa: ");
//     scanf("%f", &massaInicial);
    
//     printf("Digite o valor final desejado da massa: ");
//     scanf("%f", &massaDesejada);

//     for (tempo = 0; massaInicial > massaDesejada; tempo++)
//       massaInicial -= (massaInicial * 0.1);
    
//     printf("O tempo necessário foi: %i min", tempo);
    
//     return 0;
// }