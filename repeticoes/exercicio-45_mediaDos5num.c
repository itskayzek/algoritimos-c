#include <stdio.h>

int main() {
    int contador;
    float num, ligacao, media;
    ligacao = 0;
    for (contador = 1; contador <= 5; contador++){
      scanf("%f", &num);
      num += ligacao; //se inverter isso já não precisa de mais nd "ligacao += num".
      ligacao = num;
    }
    media = num / 5.0; //criei variavel media só para ficar mais bonitinho, mas poderia ser só "num /= 5" "printf("%f"), num".
    printf("A média dos valores é %.2f\n", media);
    return 0;
}