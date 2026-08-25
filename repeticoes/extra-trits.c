#include <stdio.h>
#define maxTam 4

int main() {
    int icont, base, numTrit, decimal, tam, vetorTrits[maxTam];
    tam = 0;
    decimal = 0;
    base = 1000;
    
    scanf("%i", &numTrit);
    
    for (icont = 0; icont < maxTam; icont++, base /= 10){
      vetorTrits[icont] = numTrit / base;
      numTrit %= base;
      if (vetorTrits[icont] > 0 && tam == 0)
        tam = icont + 1;
    }
    
    base = 1;
    for (icont = maxTam - 1; icont >= tam - 1; icont--){
      switch (vetorTrits[icont]){
        case 0:
          decimal += -base;
        break;
        
        case 2:
          decimal += base;
      }
      base *= 3;
    }
    printf("%i\n", decimal);
    
    return 0;
}

// alternativa que resolve caso a entrada comece com 0
// com terminação louca do while ahsushsh (feita por mim)
// com auxilio artificiais...


// #include <stdio.h>

// int main() {
//     char digito;
//     int decimal;
//     decimal = 0;
    
//     while ((((scanf("%c", &digito)) - 1) + digito) != '\n'){
//       decimal *= 3; 
//       if (digito == '2'){
//         decimal += 1;
//       }
//       else if (digito == '0'){
//         decimal -= 1;
//       }
//     }
//     printf("%i\n", decimal);

//     return 0;
// }