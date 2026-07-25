#include <stdio.h>
#define maxTam 202

int main() {
    int icont, jcont, espacos, ultmEspaco;
    char nome[maxTam], nomeCompacto[maxTam];
    espacos = 1;
    ultmEspaco = 0;
    
    printf("Digite um nome: ");
    fgets (nome, maxTam, stdin);
    
    for (icont = 0; nome[icont] != '\0'; icont++)
      if ((nome[icont] == ' ' || nome[icont] == '-') && ((nome[icont + 1] >= 'A' && nome[icont + 1] <= 'Z') || (nome[icont + 1] >= 'a' && nome[icont + 1] <= 'z')))
        ultmEspaco = icont;
    
    if (ultmEspaco > 0){
      for (jcont = 0, icont = ultmEspaco + 1; nome[icont] != '\n' && nome[icont] != '\0'; icont++, jcont++)
        nomeCompacto[jcont] = nome[icont];
      nomeCompacto[jcont] = ',';
      nomeCompacto[jcont + 1] = ' ';
      
      for (icont = 0, jcont += 2; icont < ultmEspaco; icont++){
        if (espacos > 0){
          nomeCompacto[jcont] = nome[icont];
          nomeCompacto[jcont + 1] = '.';
          nomeCompacto[jcont + 2] = ' ';
          jcont += 3;
          espacos = 0;
        }
        if (nome[icont] == ' ' || nome[icont] == '-')
          espacos++;
      }
      
      nomeCompacto[jcont] = '\0';
      printf("Nome compactado:\n%s", nomeCompacto);
    }
    else
      printf("%s", nome);
    
    return 0;
}