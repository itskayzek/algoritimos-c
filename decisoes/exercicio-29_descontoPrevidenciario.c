#include <stdio.h>

int main() {
    float salario, valorDesconto;
    printf("Digite o valor do salário: ");
    scanf("%f", &salario);
    valorDesconto = (salario / 100) * 11;
    if (valorDesconto <= 334.29)
      printf("o valor do desconto é %.2f", valorDesconto);
    else
      printf("o valor do desconto é R$334,29. Atenção! o valor descontado chegou no limite!");
    return 0;
}