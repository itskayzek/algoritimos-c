#include <stdio.h>
#define maxTam 202

int main() {
    int icont;
    char texto[maxTam], telefone[maxTam];
    
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; texto[icont] != '\0'; icont++){
      switch (texto[icont]){
        case 'A':
        case 'B':
        case 'C':
          telefone[icont] = '2';
        break;
       
        case 'D':
        case 'E':
        case 'F':
          telefone[icont] = '3';
        break;
        
        case 'G':
        case 'H':
        case 'I':
          telefone[icont] = '4';
        break;
        
        case 'J':
        case 'K':
        case 'L':
          telefone[icont] = '5';
        break;
        
        case 'M':
        case 'N':
        case 'O':
          telefone[icont] = '6';
        break;
        
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
          telefone[icont] = '7';
        break;
        
        case 'T':
        case 'U':
        case 'V':
          telefone[icont] = '8';
        break;
        
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
          telefone[icont] = '9';
        break;
        
        default:
          telefone[icont] = texto[icont];
      }
    }
    telefone[icont] = '\0';
    printf("%s", telefone);
    
    return 0;
}



// alternativa 1000000x melhor e mais linda
// (ideia nao foi minha, mas executei em partes tentando lembrar como era):



// #include <stdio.h>
// #define maxTam 202
// #define tam_alfa 27

// int main() {
//     int icont;
//     char texto[maxTam], telefone[maxTam], alfabeto[tam_alfa] = "22233344455566677778889999";
    
//     fgets (texto, maxTam, stdin);
    
//     for (icont = 0; texto[icont] != '\0'; icont++){
//       if (texto[icont] >= 'A' && texto[icont] <= 'Z')
//         telefone[icont] = alfabeto[texto[icont] - 'A']; //lindu!!
//       else
//         telefone[icont] = texto[icont];
//     }
//     telefone[icont] = '\0';
    
//     printf("%s\n", telefone);
    
//     return 0;
// }