#include <stdio.h>
#define listaPresenca 20

int main() {
    int icont, jcont, jaApareceu, tam, vetor2[listaPresenca], vetor1[listaPresenca];
    tam = 0;
    jaApareceu = 0;
    for (icont = 0; icont < listaPresenca; icont++){
      scanf("%i", &vetor1[icont]);
      vetor2[icont] = vetor1[icont];
    }
    
    for (icont = 0; icont < listaPresenca; icont++){
      for (jcont = 0; jcont < icont; jcont++){
        if (vetor1[icont] == vetor2[jcont])
          jaApareceu++;
      }
      if (jaApareceu > 0){
        jaApareceu = 0;
        tam++;
      }
      else
        vetor2[icont - tam] = vetor1[icont];
    }
    tam = listaPresenca - tam;
    for (icont = 0; icont < tam; icont++)
      printf("%i ", vetor2[icont]);
    
    return 0;
}