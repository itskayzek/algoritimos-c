#include <stdio.h>

int main() {
    int variavel1, variavel2, ligacao;
    printf("Escreva seu número inteiro favorito: ");
    scanf("%i", &variavel1);
    printf("Escreva o número inteiro que voce mais odeia: ");
    scanf("%i", &variavel2);
    printf("\nSeu número favorito é %i\nE o número que voce mais odeia é %i", variavel1, variavel2);
    ligacao = variavel1;
    variavel1 = variavel2;
    variavel2 = ligacao;
    printf("\n\nPermutados, o seu número favorito é: %i\nE o número que voce mais odeia é: %i", variavel1, variavel2);
    return 0;
}