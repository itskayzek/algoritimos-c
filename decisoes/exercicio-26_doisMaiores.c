#include <stdio.h>

int main() {
    int num1, num2, num3, oMaior, segMaior, terMaior, soma;
    printf("Digite tres números: ");
    scanf("%i %i %i", &num1, &num2, &num3);
    if (num1 >= num3 && num1 >= num2)
      oMaior = num1;
      else if (num2 >= num3 && num2 >= num1)
        oMaior = num2;
      else if (num3 >= num2 && num3 >= num1)
        oMaior = num3;
    if (num1 <= num3 && num1 >= num2 || num1 >= num3 && num1 <= num2)
      segMaior = num1;
      else if (num2 <= num3 && num2 >= num1 || num2 >= num3 && num2 <= num1)
        segMaior = num2;
      else if (num3 <= num1 && num3 >= num2 || num3 >= num1 && num3 <= num2)
        segMaior = num3;
    if (num1 <= num3 && num1 <= num2)
      terMaior = num1;
      else if (num2 <= num3 && num2 <= num1)
        terMaior = num2;
      else if (num3 <= num1 && num3 <= num2)
        terMaior = num3;
    soma = oMaior + segMaior;
    printf("a soma dos dois maiores é: %i", soma);
    return 0;
}
//CODIGO MELHOR ABAIXO (EU N FIZ ._.)
// #include <stdio.h>

// int main() {
//     int n1, n2, n3, menor, soma_total;

//     printf("Digite tres numeros: ");
//     scanf("%d %d %d", &n1, &n2, &n3);

//     // 1. Calcula a soma de todos
//     soma_total = n1 + n2 + n3;

//     // 2. Descobre quem é o menor de forma simples
//     menor = n1;
//     if (n2 < menor) menor = n2;
//     if (n3 < menor) menor = n3;

//     // 3. A soma dos dois maiores é (Total - Menor)
//     printf("A soma dos dois maiores e: %d\n", soma_total - menor);

//     return 0;
// }