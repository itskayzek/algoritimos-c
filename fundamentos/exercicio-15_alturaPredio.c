#include <stdio.h>

int main() {
    float pessoaAltura, predioAltura, pesSombraAlt, preSombraAlt;
    printf("Digite sua altura, da sua sombra e da sombra do prédio, respectivamente: ");
    scanf("%f %f %f", &pessoaAltura, &pesSombraAlt, &preSombraAlt);
    predioAltura = (pessoaAltura*preSombraAlt)/pesSombraAlt;
    printf("A altura do prédio é: %.2f", predioAltura);
    return 0;
}