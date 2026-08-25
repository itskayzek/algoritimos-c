#include <stdio.h>

int main() {
    int icont, jcont, permanencias, numEstacoes, qtdeComandos, EstAreaDevastada;
    permanencias = 0;
    
    printf("Digite o numero total de estacoes: ");
    scanf("%i", &numEstacoes);
    int estacoes[numEstacoes];
    
    printf("Digite a quantidade de comandos realizados pelo robo: ");
    scanf("%i", &qtdeComandos);
    int comandos[qtdeComandos];
    
    printf("Digite a estacao mais proxima a area devastada: ");
    scanf("%i", &EstAreaDevastada);
    
    printf("Digite os comandos realizados pelo robo: ");
    for (icont = 0; icont < qtdeComandos; icont++)
      scanf("%i", &comandos[icont]);
    
    for (icont = numEstacoes; icont > 0; icont--)
      estacoes[icont - 1] = icont;
    
    if (estacoes[0] == EstAreaDevastada)
      permanencias++;
    
    for (icont = 0, jcont = 0; icont < qtdeComandos; icont++){
      if (comandos[icont] == 1)
        jcont++;
      else
        jcont--;
      
      if (jcont > numEstacoes - 1)
        jcont = 0;
      else if (jcont < 0)
        jcont = numEstacoes + jcont;
      
      if (estacoes[jcont] == EstAreaDevastada)
        permanencias++;
    }
    
    printf("O robo ficou na estação proxima a area devastada %i vezes\n", permanencias);
    
    return 0;
}