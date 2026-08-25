#include <stdio.h>
#define maxTam 30
#define lin 9
#define col 14
#define TRUE 1

int main() {
    int icont, jcont, kcont, bifurcacao[maxTam] = {0};
    char agua, prateleira, nada;
    char irrigacao[lin][col] = {
    {'.', '.', '.', '.', '.', '.', '.', 'o', '.', '.', '.', '.', '.', '.'},
    {'.', '#', '#', '#', '.', '.', '.', '#', '#', '#', '#', '.', '#', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '#', '#', '#', '#', '#', '#', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '#', '.', '#', '#', '#', '#', '.', '.', '.', '.', '#', '#', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '#', '#', '#', '#', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, };
    
    agua = 'o';
    prateleira = '#';
    nada = '.';
    kcont = 0;
    
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        printf("%c", irrigacao[icont][jcont]);
      }
      printf("\n");
    }
    
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf("%c", &irrigacao[icont][jcont]);
//         if (irrigacao[icont][jcont] == agua){
//           bifurcacao[kcont] = jcont;
//         }
//       }
//     }
    
//     jcont = bifurcacao[kcont];
//     bifurcacao[kcont] = 0;
    icont = 0;
    jcont = 7;
    
    while (TRUE){
      if (irrigacao[icont + 1][jcont] == prateleira){
        if (irrigacao[icont][jcont + 1] == nada){
          bifurcacao[kcont] = icont;
          bifurcacao[kcont + 1] = jcont;
          kcont += 2;
          while (irrigacao[icont + 1][jcont] == prateleira){
            irrigacao[icont][jcont] = agua;
            jcont++;
          }
        }
        
        else if (irrigacao[icont][jcont - 1] == nada){
          while (irrigacao[icont + 1][jcont] == prateleira){
            irrigacao[icont][jcont] = agua;
            jcont--;
          }
        }
        irrigacao[icont][jcont] = agua;
      }
      
      if (irrigacao[icont + 1][jcont] == nada){
        while (irrigacao[icont + 1][jcont] == nada && icont < lin){
          irrigacao[icont][jcont] = agua;
          icont++;
        }
        irrigacao[icont][jcont] = agua;
      }
          
      if (icont >= lin - 1){
        kcont -= 2;
        if (kcont >= 0){
          icont = bifurcacao[kcont];
          jcont = bifurcacao[kcont + 1];
        }
        else
          break;
      }
    }
    
    printf("\n");
    for (icont = 0; icont < lin; icont++){
      for (jcont = 0; jcont < col; jcont++){
        printf("%c", irrigacao[icont][jcont]);
      }
      printf("\n");
    }
    
    return 0;
}