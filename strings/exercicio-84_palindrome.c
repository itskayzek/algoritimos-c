#include <stdio.h>
#define maxTam 201

int main() {
    int jcont, icont, palindrome;
    char vetor[maxTam];
    palindrome = 0;
    
    fgets (vetor, maxTam, stdin);
    
    for (jcont = 0; vetor[jcont] != '\0'; jcont++){
    }
    
    for (icont = 0, jcont -= 2; jcont > icont; icont++, jcont--){
      if (vetor[icont] == vetor[jcont])
        palindrome++;
      else {
        palindrome = 0;
        break;
      }
    }
    
    if (palindrome > 0)
      printf("essa string é palindrome");
    else
      printf("essa string não é palindrome");
    
    return 0;
}