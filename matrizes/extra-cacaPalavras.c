#include <stdio.h>
#define lin 7
#define col 19
#define maxTam col + 1
#define TRUE 1
#define FALSE 0

int main() {
    int icont, jcont, kcont, lcont, tam, achou;
    char palavra[maxTam];
    //char lixo;
    char matriz[lin][col] = {
    "ABLNHEHLLTBQJFRGQH\0",
    "KJULOCALIZARARVMNT\0",
    "FEOGEQHTLOIDFMBAOE\0",
    "RWBNUSGEVIXOIOXGUS\0",
    "BRDARGTENTATIVAYJT\0",
    "EARHSOWESLFVCDPZJE\0",
    "WECSWATLXBMTLCDPNI\0", };
    tam = 0;
    achou = FALSE;
    
    printf("Aqui está o caça-palavras:\n");
    for (icont = 0; icont < lin; icont++)
      printf("%s\n", matriz[icont]);
    
    printf("\n");
    
//     printf("Digite seu caça palavras: ");
//     for (icont = 0; icont < lin; icont++){
//       for (jcont = 0; jcont < col; jcont++){
//         scanf(" %c", &matriz[icont][jcont]);
//       }
//     }
//     scanf("%c", &lixo);
    
    printf("Digite a palavra que desejas encontrar: ");
    fgets (palavra, maxTam, stdin);
    
    printf("\n");
    
    for (icont = 0; palavra[icont]; icont++){
      if (palavra[icont] != '\n')
        tam++;
      else
        palavra[icont] = '\0';
    }
    
    for (icont = 0; achou == FALSE && icont < lin; icont++){
      for (jcont = 0; achou == FALSE && jcont < col; jcont++){
        if (matriz[icont][jcont] == palavra[0]){
          achou = TRUE;
          kcont = jcont;
          lcont = 0;
          while (palavra[lcont]){
            if (matriz[icont][kcont] != palavra[lcont]){
              achou = FALSE;
              break;
            }
            lcont++;
            kcont++;
          }
          
          if (achou)
            break;
          
          achou = TRUE;
          kcont = icont;
          lcont = 0;
          while (palavra[lcont]){
            if (matriz[kcont][jcont] != palavra[lcont]){
              achou = FALSE;
              break;
            }
            kcont++;
            lcont++;
          }
        }
      }
    }
    
    if (achou)
      printf("Voce achou uma palavra! +%i pontos!\n", tam);
    else
      printf("Voce nao achou nenhuma palavra, -5 pontos.");
    
    return 0;
}