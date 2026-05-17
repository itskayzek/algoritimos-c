#include <stdio.h>

int main() {
    float qntdLitros, valorTotal;
    char combustivel;
    printf("Digite a quantidade de litros e o tipo do combustivel: ");
    scanf("%f %c", &qntdLitros, &combustivel);
    
    switch (combustivel){
      case 'A':
        if (qntdLitros <= 25)
          qntdLitros *= 1.862;
        else
          qntdLitros *= 1.824;
      break; 
      case 'G':
        if (qntdLitros <= 25)
          qntdLitros *= 2.619;
        else
          qntdLitros *= 2.565;
      }
      
    valorTotal = qntdLitros;
    printf("%.2f", valorTotal);
      
    return 0;
}

//     ate 25 litros, gasolina = litros * 2.619;
//     acima 25 litros, gasolina = litros * 2.565;
    
//     ate 25 litros, alcool = litros * 1.862;
//     acima 25 litros, alcool = litros * 1.824;