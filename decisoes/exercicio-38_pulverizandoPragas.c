#include <stdio.h>

int main() {
    float valorTotal, acres, desconto;
    int tipoPraga;
    printf("Digite o tipo de praga e quantos acres a área possui: ");
    scanf("%i %f", &tipoPraga, &acres);
    
    switch (tipoPraga) {
      case 1: tipoPraga = 50; break;
      case 2: tipoPraga = 100; break;
      case 3: tipoPraga = 150; break;
      case 4: tipoPraga = 250; break;
      }
    valorTotal = tipoPraga * acres;
    
    if (acres > 1000)
      valorTotal -= (5.0 * (valorTotal/100.0));
    
    if (valorTotal > 750) {
      desconto = valorTotal - 750.0;
      desconto -= (10.0 * (desconto/100.0));
      valorTotal = desconto + 750.0;
      }
    
    printf("O valor a ser pago é %.2f", valorTotal);
  return 0;
}