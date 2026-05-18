#include <stdio.h>

int main() {
    int k, coordenadaX, coordenadaY;
    printf("Digite o valor de k e as coordenadas que a bola atingiu: ");
    scanf("%i %i %i", &k, &coordenadaX, &coordenadaY);
    if (coordenadaX == 0 && coordenadaY == 0)
      printf("A bola bateu no juiz!");
    else
    if (coordenadaX <= k && coordenadaX >= -k)
    {
      if (coordenadaY <= k && coordenadaY >= 0)
      {
        printf("A marcação está dentro de campo!");
      }
      else      
        printf("A marcação está fora de campo!");
    }
    return 0;
}