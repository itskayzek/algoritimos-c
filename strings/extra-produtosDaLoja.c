#include <stdio.h>
#define maxTam 2000
#define registros 100

int main() {
    int icont, jcont, idxMaisBarato;
    float media, precoMaisBarato, precos[registros];
    char produtos[maxTam], produtoMaisBarato[20];
    idxMaisBarato = 0;
    media = 0;
    
    printf("Digite o nome dos produtos os separando por '/': ");
    fgets (produtos, maxTam, stdin);
    
    printf("Digite os valores dos respectivos produtos, em ordem: ");
    for (icont = 0; icont < registros; icont++){
      scanf(" %f", &precos[icont]);
      media += precos[icont];
    }
    media /= registros;
    
    if (precos[0] < media)
      precos[0] += (precos[0] * 0.1);
    
    precoMaisBarato = precos[0];
    for (icont = 1; icont < registros; icont++){
      if (precos[icont] < media)
        precos[icont] += (precos[icont] * 0.1);
      
      if (precos[icont] < precoMaisBarato){
        precoMaisBarato = precos[icont];
        idxMaisBarato = icont;
      }
    }
    
    icont = 0;
    if (idxMaisBarato != 0){
      for (jcont = 0;  jcont < idxMaisBarato; icont++){
        if (produtos[icont] == '/')
          jcont++;
      }
    }
    for (jcont = 0; produtos[icont] != '/' && produtos[icont] != '\n' && produtos[icont] != '\0'; jcont++, icont++)
      produtoMaisBarato[jcont] = produtos[icont];
    produtoMaisBarato[jcont] = '\0';
    
    
    printf("produto: %s\n", produtoMaisBarato);
    printf("preco: %.2f", precoMaisBarato);
    
    return 0;
}