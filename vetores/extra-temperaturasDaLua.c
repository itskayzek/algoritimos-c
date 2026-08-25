#include <stdio.h>
#define maxTam 12
#define TRUE 1 
#define FALSE 0

int main() {
    int icont, inicio, fim, intervalo, primeiraRodada, temperaturas[maxTam];
    float soma, maior, menor;
    primeiraRodada = TRUE;
    inicio = 0;
    
    printf("Digite as temperaturas medidas: ");
    for (icont = 0; icont < maxTam; icont++)
      scanf("%i", &temperaturas[icont]);
    
    printf("Digite o intervalo das médias das temperaturas: ");
    scanf("%i", &intervalo);
    
    fim = inicio + intervalo;
    while (fim - 1 < maxTam){
      soma = 0.0;
      for (icont = inicio; icont < fim; icont++)
        soma += temperaturas[icont];
      
      inicio++;
      fim++;
      
      soma /= intervalo;
      if (soma > maior || primeiraRodada == TRUE)
        maior = soma;
      if (soma < menor || primeiraRodada == TRUE)
        menor = soma;
      primeiraRodada = FALSE;
    }
    
    printf("A maior temperatura média foi: %.2f\n", maior);
    printf("A menor temperatura média foi: %.2f\n", menor);
    
    return 0;
}