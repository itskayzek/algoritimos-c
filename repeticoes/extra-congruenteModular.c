#include <stdio.h>

int main() {
    int icont, numI, numJ, numM;
    
    printf("Digite 3 valores para i m j: ");
    scanf("%i %i %i", &numI, &numM, &numJ);
    
    for (; numI >= 0; numI--){
      for (icont = numJ; icont >= 0; icont--){
        if ((numI % numM) == (icont % numM))
          printf("%i %% %i = %i %% %i\n\n", numI, numM, icont, numM);
      }
    }
    
    return 0;
}


// esse codigo abaixo era oq eu achava que deveria
// ser feito nesse exercicio (enunciado horrivel btw)


// #include <stdio.h>

// int main() {
//     int numI, numJ, numM;
    
//     printf("Digite 3 valores para i m j: ");
//     scanf("%i %i %i", &numI, &numM, &numJ);
    
//     while (numI >= numM && numJ >= numM){
//       if ((numI % numM) == (numJ % numM))
//         printf("%i %% %i = %i %% %i\n\n", numI, numM, numJ, numM);
      
//       numI--;
//       numJ--;
//     }
    
//     return 0;
// }