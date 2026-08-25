#include <stdio.h>
#define maxTam 200
#define cobolTam 5

int main() {
    int icont, jcont;
    char texto[maxTam], cobol[cobolTam] = "cobol";
    jcont = 0;
    
    fgets (texto, maxTam, stdin);
    
    if (texto[0] == cobol[0])
      jcont++;
    
    for (icont = 0; texto[icont]; icont++){
      if (texto[icont] == '-'){
        if (texto[icont - 1] == cobol[jcont])
          jcont++;
        if (texto[icont + 1] == cobol[jcont])
          jcont++;
      }
        
      else if (texto[icont + 1] == '\n' || texto[icont + 1] == '\0'){
        if (texto[icont] == cobol[jcont])
          jcont++;
        break;
      }
    }
    
    if (jcont == cobolTam)
      printf("COBOL");
    else
      printf("BUG");
    
    return 0;
}