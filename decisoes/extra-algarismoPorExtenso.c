#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade;
    printf("Escreva um número inteiro <=999: ");
    scanf("%i", &numero);
    centena = numero/100;
    dezena = (numero%100)/10;
    unidade = (numero%100)%10;
    
    switch(dezena+centena)
    {
      case 0:
        switch(unidade)
        {
          case 0: printf("Zero");
            break;
          case 1: printf("Um");
            break;
          case 2: printf("Dois");
            break;
          case 3: printf("Tres");
            break;
          case 4: printf("Quatro");
            break;
          case 5: printf("Cinco");
            break;
          case 6: printf("Seis"); 
            break;
          case 7: printf("Sete"); 
            break;
          case 8: printf("Oito");
            break;
          case 9: printf("Nove");
        }
        break;
    //---------------------------------------------------
    
    default:
    switch(centena)
    {
      case 0: if(dezena==1)
                switch(dezena*unidade)
                {
                  case 0: printf("Dez");
                    break;
                  case 1: printf("Onze");
                    break;
                  case 2: printf("Doze");
                    break;
                  case 3: printf("Treze");
                    break;
                  case 4: printf("Catorze");
                    break;
                  case 5: printf("Quinze");
                    break;
                  case 6: printf("Dezesseis");
                    break;
                  case 7: printf("Dezessete");
                    break;
                  case 8: printf("Dezoito");
                    break;
                  case 9: printf("Dezenove");
                    break;
                }
              else if(dezena!=1)
              {
                switch(dezena)
                {
                  case 2: printf("Vinte");
                    break;
                  case 3: printf("Trinta");
                    break;
                  case 4: printf("Quarenta");
                    break;
                  case 5: printf("Cinquenta");
                    break;
                  case 6: printf("Sessenta");
                    break;
                  case 7: printf("Setenta");
                    break;
                  case 8: printf("Oitenta");
                    break;
                  case 9: printf("Noventa");
                    break;
                }
                switch(unidade)
                {
                  case 1: printf(" e Um");
                    break;
                  case 2: printf(" e Dois");
                    break;
                  case 3: printf(" e Tres");
                    break;
                  case 4: printf(" e Quatro");
                    break;
                  case 5: printf(" e Cinco");
                    break;
                  case 6: printf(" e Seis");
                    break;
                  case 7: printf(" e Sete");
                    break;
                  case 8: printf(" e Oito");
                    break;
                  case 9: printf(" e Nove");
                }
              }
          break;
    //-----------------------------------------------------
    
    default:
      if(centena+dezena+unidade==1)
        printf("Cem");
      else
        switch(centena)
        {
          case 1: printf("Cento");
            break;
          case 2: printf("Duzentos");
            break;
          case 3: printf("Trezentos");
            break;
          case 4: printf("Quatrocentos");
            break;
          case 5: printf("Quinhentos");
            break;
          case 6: printf("Seiscentos");
            break;
          case 7: printf("Setecentos");
            break;
          case 8: printf("Oitocentos");
            break;
          case 9: printf("Novecentos");
        }
    
      if(dezena==1)
        switch(dezena*unidade)
        {
          case 0: printf(" e Dez");
            break;
          case 1: printf(" e Onze");
            break;
          case 2: printf(" e Doze");
            break;
          case 3: printf(" e Treze");
            break;
          case 4: printf(" e Catorze");
            break;
          case 5: printf(" e Quinze");
            break;
          case 6: printf(" e Dezesseis");
            break;
          case 7: printf(" e Dezessete");
            break;
          case 8: printf(" e Dezoito");
            break;
          case 9: printf(" e Dezenove");
            break;
        }
   
      else if(dezena!=1)
      {
        switch(dezena)
        {
          case 2: printf(" e Vinte");
            break;
          case 3: printf(" e Trinta");
            break;
          case 4: printf(" e Quarenta");
            break;
          case 5: printf(" e Cinquenta");
            break;
          case 6: printf(" e Sessenta");
            break;
          case 7: printf(" e Setenta");
            break;
          case 8: printf(" e Oitenta");
            break;
          case 9: printf(" e Noventa");
        }
    
        switch(unidade)
        {
        case 1: printf(" e Um");
          break;
        case 2: printf(" e Dois");
          break;
        case 3: printf(" e Tres");
          break;
        case 4: printf(" e Quatro");
          break;
        case 5: printf(" e Cinco");
          break;
        case 6: printf(" e Seis");
          break;
        case 7: printf(" e Sete");
          break;
        case 8: printf(" e Oito");
          break;
        case 9: printf(" e Nove");
        }
      }
    }
    }
    return 0;
}

// IA VERSION:
//   #include <stdio.h>

// int main() {
//     int numero, centena, dezena, unidade;
//     printf("Escreva um número inteiro <= 999: ");
//     scanf("%i", &numero);

//     if (numero == 0) {
//         printf("Zero\n");
//     } else if (numero == 100) {
//         printf("Cem\n");
//     } else {
//         centena = numero / 100;
//         dezena = (numero % 100) / 10;
//         unidade = numero % 10;

//         // --- CENTENAS ---
//         switch (centena) {
//             case 1: printf("Cento"); break;
//             case 2: printf("Duzentos"); break;
//             case 3: printf("Trezentos"); break;
//             case 4: printf("Quatrocentos"); break;
//             case 5: printf("Quinhentos"); break;
//             case 6: printf("Seiscentos"); break;
//             case 7: printf("Setecentos"); break;
//             case 8: printf("Oitocentos"); break;
//             case 9: printf("Novecentos"); break;
//         }

//         // Simula o "E": Se tem centena E (tem dezena OU tem unidade)
//         if (centena > 0) {
//             if (dezena > 0) {
//                 printf(" e ");
//             } else if (unidade > 0) {
//                 printf(" e ");
//             }
//         }

//         // --- DEZENAS ---
//         if (dezena == 1) {
//             // Especial 10-19
//             switch (unidade) {
//                 case 0: printf("Dez"); break;
//                 case 1: printf("Onze"); break;
//                 case 2: printf("Doze"); break;
//                 case 3: printf("Treze"); break;
//                 case 4: printf("Catorze"); break;
//                 case 5: printf("Quinze"); break;
//                 case 6: printf("Dezesseis"); break;
//                 case 7: printf("Dezessete"); break;
//                 case 8: printf("Dezoito"); break;
//                 case 9: printf("Dezenove"); break;
//             }
//         } else {
//             // Dezenas normais
//             switch (dezena) {
//                 case 2: printf("Vinte"); break;
//                 case 3: printf("Trinta"); break;
//                 case 4: printf("Quarenta"); break;
//                 case 5: printf("Cinquenta"); break;
//                 case 6: printf("Sessenta"); break;
//                 case 7: printf("Setenta"); break;
//                 case 8: printf("Oitocenta"); break;
//                 case 9: printf("Noventa"); break;
//             }

//             // --- UNIDADES ---
//             if (unidade > 0) {
//                 if (dezena > 0) {
//                     printf(" e ");
//                 }
//                 switch (unidade) {
//                     case 1: printf("Um"); break;
//                     case 2: printf("Dois"); break;
//                     case 3: printf("Tres"); break;
//                     case 4: printf("Quatro"); break;
//                     case 5: printf("Cinco"); break;
//                     case 6: printf("Seis"); break;
//                     case 7: printf("Sete"); break;
//                     case 8: printf("Oito"); break;
//                     case 9: printf("Nove"); break;
//                 }
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }