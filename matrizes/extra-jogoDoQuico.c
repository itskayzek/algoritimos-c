#include <stdio.h>
#define TRUE 1
#define FALSE 0
//#define dim 4

int main() {
    int icont, jcont, tempo, presoLoop, achouTesouro, foraLimites, dim;
    printf("Digite a proporção do seu tabuleiro: ");
    scanf("%i", &dim);
    char tabuleiro[dim][dim]; //= {
//     {'S', 'S', 'O', 'S'},
//     {'S', 'L', 'L', 'S'},
//     {'O', 'X', 'O', 'O'},
//     {'N', 'S', 'S', 'N'}, };
    
    tempo = 0;
    presoLoop = FALSE;
    achouTesouro = FALSE;
    foraLimites = FALSE;
    
    printf("Digite as direções do seu tabuleiro (norte, sul, oeste, leste) e o tesouro: ");
    for (icont = 0; icont < dim; icont++){
      for (jcont = 0; jcont < dim; jcont++){
        scanf(" %c", &tabuleiro[icont][jcont]);
      }
      printf("\n");
    }
    
    printf("Digite a posição inicial que começarás: ");
    scanf("%i %i", &icont, &jcont);
    
    while (TRUE){
      if ((icont < 0 || jcont < 0) || (icont >= dim || jcont >= dim)){
        foraLimites = TRUE;
        break;
      }
      
      if (tabuleiro[icont][jcont] == 'X'){
        achouTesouro = TRUE;
        break;
      }
      
      switch (tabuleiro[icont][jcont]){
        case 'N': icont--;
      break;
        case 'S': icont++;
      break;
        case 'O': jcont--;
      break;
        case 'L': jcont++;
      break;
      }
      tempo++;
      
      if (tempo >= dim*dim){
        presoLoop = TRUE;
        break;
      }
    }
    
    if (achouTesouro)
      printf("Parabéns! Voce achou o tesouro em %i minutos!\n", tempo);
    else if (presoLoop)
      printf("Voce perdeu! ficou perdido (literalmente) em um loop sem conseguir achar o tesouro.");
    else if (foraLimites)
      printf("Voce perdeu! tudo tem um limite, e voce ultrapassou o deste tabuleiro.");
    else
      printf("Erro inesperado!");
    
    return 0;
}



//solucao bacana para substituir o switch

// char direcoes[4] = {'N', 'S', 'O', 'L'};
// int movimentoI[4] = {-1, 1, 0, 0};
// int movimentoJ[4] = {0, 0, -1, 1};

// if (tabuleiro[icont][jcont] == 'X'){
//   achouTesouro = TRUE;
//   break;
// }

// for (int k = 0; k < 4; k++) {
//   if (tabuleiro[icont][jcont] == direcoes[k]) {
//     icont += movimentoI[k];
//     jcont += movimentoJ[k];
//     break;
//   }
// }

// tempo++;