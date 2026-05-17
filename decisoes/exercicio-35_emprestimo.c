#include <stdio.h>

int main() {
    float rendaMensal, valorEmprestimo, prestacoes, valorPrestacoes;
    printf("Digite a renda mensal, o valor do empréstimo e a quantidade de prestações: ");
    scanf("%f %f %f", &rendaMensal, &valorEmprestimo, &prestacoes);
    valorPrestacoes = valorEmprestimo/prestacoes;
    
    if (valorEmprestimo <= (rendaMensal*10) && valorPrestacoes <= rendaMensal*0.3)
      printf("O emprésitimo será concedido!");
    else
      printf("O empréstimo não será concedido!");
    
    
//     entrada = rendaMensal, valorEmprestimo, prestacoes;
    
//     valorPrestacoes = rendaMensal/prestacoes;
    
//     valorEmprestimo = MAX rendaMensal*10;
    
//     prestacoes = MAX rendaMensal*(30/100);
    
    return 0;
}