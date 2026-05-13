#include <stdio.h>

int main() {
    float distanciaSemaforos, velocidadeMax, aceleracaoCarros, tempoVeloMax, distanciaAceleracao, distanciaVelocidade, tempoVeloConst, tempoTotal;
    printf("Digite a distancia dos semáforos, a velocidade máxima e a aceleração dos carros: ");
    scanf("%f %f %f", &distanciaSemaforos, &velocidadeMax, &aceleracaoCarros);
    
    tempoVeloMax = velocidadeMax / aceleracaoCarros;
    
    distanciaAceleracao = 0.5 * aceleracaoCarros * (tempoVeloMax * tempoVeloMax);
    
    distanciaVelocidade = distanciaSemaforos - distanciaAceleracao;
    
    tempoVeloConst = distanciaVelocidade / velocidadeMax;
    
    tempoTotal = (tempoVeloMax + tempoVeloConst) - 3.0;
    
    printf("o tempo total é: %.2f", tempoTotal);
    
    return 0;
}
// consideracoes a serem feitas, a distanciaAceleracao tem q ser menor do q distanciaSemaforos
// e todos os valores tem que estar em metros por segundo!