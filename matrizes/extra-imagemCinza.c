#include <stdio.h>
#define altura 100
#define largura 100
#define canaisRGB 3

int main() {
    int icont, jcont, kcont;
    char canal; // puro auxiliar ao entendimento do observador externo (sim, voce mesmo)
    float imgOriginal[altura][largura][canaisRGB], imgCinza[altura][largura] = {0};
    
    for (icont = 0; icont < altura; icont++){
      for (jcont = 0; jcont < largura; jcont++){
        for (kcont = 0, canal = 'R'; kcont < canaisRGB; kcont++){
          printf("Digite o valor do canal %c no pixel da %i linha e %i coluna: ", canal, icont + 1, jcont + 1);
          scanf("%f", &imgOriginal[icont][jcont][kcont]);
           
          if (canal == 'R')
            canal -= 11;
          else
            canal -= 5;
        }
        printf("\n");
      }
    }
    
    for (icont = 0; icont < altura; icont++){
      for (jcont = 0; jcont < largura; jcont++){
        imgCinza[icont][jcont] += (imgOriginal[icont][jcont][0] * 0.299);
        
        imgCinza[icont][jcont] += (imgOriginal[icont][jcont][1] * 0.587);
        
        imgCinza[icont][jcont] += (imgOriginal[icont][jcont][2] * 0.114);
      }
    }
    
    for (icont = 0; icont < altura; icont++){
      for (jcont = 0; jcont < largura; jcont++){
        printf("%.0f\t", imgCinza[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}