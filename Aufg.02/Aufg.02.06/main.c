#include <stdio.h>
#define PI 3.14

int main()
{
    float r;
  
    printf("\nWillkommen beim Flächeninhaltsrechner für Kreise!\n\n");
  
    printf("Bitte geben Sie den Radius des Kreises ein:\n");
    scanf("%f", &r);
    
    printf("Der Flächeninhalt beträgt: %f", PI*r*r);
  
    return 0;
}
