#include <stdio.h>

int main() {
    char caractere;
    printf("Digite 1 caractere: ");
    scanf("%c", &caractere);
    
    switch (caractere){
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        printf("Isso é um número!");
        break;
      
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        printf("Isso é uma vogal!");
        break;
      
      case 'B':
      case 'C':
      case 'D':
      case 'F':
      case 'G':
      case 'H':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
        printf("Isso é uma consoante!");
        break;
      
      default:
        printf("Isso é um simbolo!");
      }        
    
    return 0;
}
    
    //  CODIGO MELHOR ABAIXO (n fui eu :/):
//     #include <stdio.h>

// int main() {
//     char c;
//     printf("Digite 1 caractere: ");
//     scanf(" %c", &c); // O espaço antes do %c ignora o 'Enter' da leitura anterior

//     // 1. Verifica se é um número (entre '0' e '9')
//     if (c >= '0' && c <= '9') {
//         printf("Isso é um número!\n");
//     }
//     // 2. Verifica se é uma letra (maiúscula ou minúscula)
//     else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
//         // Se entrou aqui, temos certeza que é uma letra. Agora isolamos as vogais:
//         if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
//             c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             printf("Isso é uma vogal!\n");
//         } else {
//             // Se é uma letra e não é vogal, só pode ser consoante
//             printf("Isso é uma consoante!\n");
//         }
//     }
//     // 3. Se não é número e nem letra, restam os símbolos
//     else {
//         printf("Isso é um símbolo!\n");
//     }

//     return 0;
// }