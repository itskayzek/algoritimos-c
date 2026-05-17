#include <stdio.h>

int main() {
    float exame1, exame2, exame3, exame4, exame5;
    printf("Digite as 5 notas dos exames: ");
    scanf("%f %f %f %f %f", &exame1, &exame2, &exame3, &exame4, &exame5);
    
    if (exame1 >= 70 && exame2 >= 70 && exame3 >= 70 && exame4 >= 70 && exame5 >= 70)
      printf("Classificação A");
    else if ((exame1 >= 70 && exame2 >= 70 && exame4 >= 70) && (exame3 < 70 || exame5 < 70))
      printf("Classificação B");
    else if ((exame1 >= 70 && exame2 >= 70 && exame5 < 70) && (exame3 >= 70 || exame4 >= 70))
      printf("Classificação C");
    else
      printf("Reprovado!");
    
  return 0;
}