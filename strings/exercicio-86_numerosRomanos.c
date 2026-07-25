#include <stdio.h>
#define maxTam 201

int main() {
    int cont, decimal, limite, ligacao, decimais[maxTam];
    char romanos[maxTam];
    decimal = 0;
    
    printf("Digite um numero romano: ");
    fgets (romanos, maxTam, stdin);
    
    for (cont = 0; romanos[cont] != '\0'; cont++){
      switch (romanos[cont]){
        case 'i':
        case 'I':
          decimais[cont] = 1;
        break;
        
        case 'v':
        case 'V':
          decimais[cont] = 5;
        break;
        
        case 'x':
        case 'X':
          decimais[cont] = 10;
        break;
        
        case 'l':
        case 'L':
          decimais[cont] = 50;
        break;
        
        case 'c':
        case 'C':
          decimais[cont] = 100;
        break;
        
        case 'd':
        case 'D':
          decimais[cont] = 500;
        break;
        
        case 'm':
        case 'M':
          decimais[cont] = 1000;
        break;
        
        default:
          decimais[cont] = 0;
      }
    }
    limite = cont - 2;
    
    for (cont = 0; cont < limite; cont++){
      if (decimais[cont] < decimais[cont + 1]){
        ligacao = decimais[cont + 1];
        decimais[cont + 1] = -decimais[cont];
        decimais[cont] = ligacao;
        cont++;
      }
    }
    
    for (cont = 0; cont <= limite; cont++)
      decimal += decimais[cont];
    printf("Esse é o equivalente em decimal: %i", decimal);
    
    return 0;
}