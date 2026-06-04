#include <stdio.h>

int main() {
    int voto, zero, um, dois, contador;
    zero = 0;
    um = 0;
    dois = 0;
    
    for (contador = 0; voto >= 0; contador++){
      scanf("%i", &voto);
      if (voto == 0)
        zero++;
      else if (voto == 1)
        um++;
      else if (voto == 2)
        dois++;
    }
    printf("0 teve %i votos\n1 teve %i votos\n2 teve %i votos.", zero, um, dois);
    return 0;
}