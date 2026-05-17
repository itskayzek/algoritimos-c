#include <stdio.h>

int main() {
    float parcela1, parcela2, parcela3, parcela4, passesTentados, passesCompletos, jardasPassadas, passesTouchdowns, passesInterceptados, qbRating;
    scanf("%f %f %f %f %f", &passesTentados, &passesCompletos, &jardasPassadas, &passesTouchdowns, &passesInterceptados);
    
    parcela1 = ((passesCompletos / passesTentados) - 0.3) / 0.2;
    parcela2 = ((jardasPassadas / passesTentados) - 3) / 4;
    parcela3 = (passesTouchdowns / passesTentados) / 0.05;
    parcela4 = ((passesInterceptados / passesTentados) - 0.095) / 0.04;
    
    if (parcela1 > 2.375)
      parcela1 = 2.375;
      else if (parcela1 < 0)
        parcela1 = 0;
    
    if (parcela2 > 2.375)
      parcela2 = 2.375;
      else if (parcela2 < 0)
        parcela2 = 0;
    
    if (parcela3 > 2.375)
      parcela3 = 2.375;
      else if (parcela3 < 0)
        parcela3 = 0;
    
    if (parcela4 > 2.375)
      parcela4 = 2.375;
      else if (parcela4 < 0)
        parcela4 = 0;
    
    qbRating = ((parcela1 + parcela2 + parcela3 + parcela4) * 100) / 6;
    printf("%.2f", qbRating);
    
    return 0;
}