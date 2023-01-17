#include <stdio.h>

int main ()
{
    float DV, GefahreneKilometer;
    
    printf("\nWilkommen beim Verbrauchsrechner für Ihre Fahrt!\n\n");
  
    printf("Was verbraucht ihr KFZ in 100km?\n");
    scanf("%f", &DV);
    printf("Wie viele Kilometer sind Sie gefahren?");
    scanf("%f", &GefahreneKilometer);
  
    printf("Sie haben %f Kilometer verbraucht.", DV/100*GefahreneKilometer);
    
    return 0;
    
}
