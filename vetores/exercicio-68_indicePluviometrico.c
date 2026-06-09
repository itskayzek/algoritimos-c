#include <stdio.h>

int main() {
    int contador, diaMaisChuva, diaMenosChuva;
    float media1, media2, diaJunho[30];
    media1 = 0.0;
    media2 = 0.0;
    diaMaisChuva = 1;
    diaMenosChuva = 1;
    
    printf("Digite o indice pluviometrico de cada dia do mes de junho: \n");
    for (contador = 0; contador < 30; contador++){    
      scanf("%f", &diaJunho[contador]);
      
      if (diaJunho[contador] > diaJunho[diaMaisChuva - 1])
        diaMaisChuva = contador + 1;
      
      if (diaJunho[contador] < diaJunho[diaMenosChuva - 1])
        diaMenosChuva = contador + 1;
      
      if (contador < 15)
        media1 += diaJunho[contador];
        
      if (contador >= 15)
        media2 += diaJunho[contador];
    }
    media1 /= 15.0;
    media2 /= 15.0;
    
    printf("\nO dia %i foi o que mais choveu\n\nE o dia %i foi o que menos choveu.\n\n", diaMaisChuva, diaMenosChuva);
    printf("A média da primeira quinzena foi %.2f\n\nE na segunda quinzena foi %.2f.", media1, media2);
    
    return 0;
}