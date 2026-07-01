#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
    int divisor, ehPrimo, valor1, valor2, num;
    scanf("%i", &num);
    valor1 = valor2 = 1;
    ehPrimo = TRUE;
    
    for (divisor = 2; divisor < num; divisor++){
      if (num % divisor == 0)
        ehPrimo = FALSE;
    }    
    
    if (ehPrimo == FALSE)
      printf("%i não é um número primo de chen", num);
    
    else {
      num += 2;
      for (divisor = 2; divisor < num; divisor++){
        if (num % divisor == 0)
          ehPrimo = FALSE;
      }
      
      if (ehPrimo == FALSE){
        while (ehPrimo == FALSE){
          ehPrimo = TRUE;
          valor1++;
          for (divisor = 2; divisor < valor1; divisor++){
            if (valor1 % divisor == 0){
              valor1++;
              divisor = 1;
            }
          }
          
          if (valor1 * 2 > num)
            break;
          else if (num % valor1 != 0)
            ehPrimo = FALSE;
          else {
            valor2 = num / valor1;
            for (divisor = 2; divisor < valor2; divisor++){
              if (valor2 % divisor == 0)
                ehPrimo = FALSE;
            }
          }
        }
        if (valor1 * valor2 == num)
          printf("%i é um numero primo de chen", num-2);
        else
          printf("%i não é um número primo de chen", num-2);
      }
      
      else
        printf("%i é um número primo de chen", num-2);
    }
    
    return 0;
}


// uma alternativa praticamente igual, só mudando 
// a forma de achar um semiprimo, pois n sabia que 
// se um número não for primo, só existe 1 combinação
// possível para esse número ser semiprimo ;-;



// #include <stdio.h>
// #define TRUE 1
// #define FALSE 0

// int main() {
//     int p, divisor, pEhPrimo = TRUE;

//     // Lendo o valor original
//     scanf("%i", &p);

//     // 1º TESTE: O número 'p' é primo?
//     if (p <= 1) {
//         pEhPrimo = FALSE;
//     } else {
//         for (divisor = 2; divisor * divisor <= p; divisor++) {
//             if (p % divisor == 0) {
//                 pEhPrimo = FALSE;
//                 break;
//             }
//         }
//     }

//     // Se 'p' nem for primo, já paramos por aqui
//     if (pEhPrimo == FALSE) {
//         printf("%i não é um número primo de Chen\n", p);
//     } 
//     else {
//         // p é primo! Agora vamos criar uma variável para o p + 2
//         int p2 = p + 2;
//         int p2EhPrimo = TRUE;
//         int menorDivisor = 0;

//         // 2º TESTE: 'p + 2' é primo? 
//         // (Já aproveitamos esse laço para guardar o primeiro divisor que acharmos!)
//         for (divisor = 2; divisor * divisor <= p2; divisor++) {
//             if (p2 % divisor == 0) {
//                 p2EhPrimo = FALSE;
//                 menorDivisor = divisor; // Achamos a primeira metade do subprimo!
//                 break;
//             }
//         }

//         if (p2EhPrimo == TRUE) {
//             // p + 2 é primo! Condição atendida.
//             printf("%i é um número primo de Chen\n", p);
//         } 
//         else {
//             // p + 2 NÃO é primo. Vamos verificar a regra do subprimo!
//             // O primeiro fator é 'menorDivisor'. O segundo fator é o que sobra:
//             int fator2 = p2 / menorDivisor;
//             int fator2EhPrimo = TRUE;

//             // 3º TESTE: Esse fator que sobrou também é primo?
//             for (divisor = 2; divisor * divisor <= fator2; divisor++) {
//                 if (fator2 % divisor == 0) {
//                     fator2EhPrimo = FALSE;
//                     break;
//                 }
//             }

//             // Se o segundo fator também for primo, provamos que é um subprimo!
//             if (fator2EhPrimo == TRUE) {
//                 printf("%i é um número primo de Chen\n", p);
//             } else {
//                 printf("%i não é um número primo de Chen\n", p);
//             }
//         }
//     }

//     return 0;
// }