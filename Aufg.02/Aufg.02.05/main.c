#include <stdio.h>

int main ()
{
    float DV, GefahreneKilometer;
    
    printf("\nWilkommen beim Verbrauchsrechner für Ihre Fahrt!\n\n");
  
    printf("Was verbraucht ihr KFZ in 100km?\n");
    scanf("%f", &DV);
    printf("\nWie viele Kilometer sind Sie gefahren?\n");
    scanf("%f", &GefahreneKilometer);
  
    printf("\n\nSie haben %f Kilometer verbraucht.\n\n", DV/100*GefahreneKilometer);
    
    return 0;
    
}
