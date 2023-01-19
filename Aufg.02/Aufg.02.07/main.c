#include <stdio.h>

int main()
{
    int AT;
  
    printf("\nWillkommen beim Tagesrechner!\n\n");
    
    printf("Bitte geben Sie die Anzahl der Tage an.\n");
    scanf("%d", &AT);
           
    printf("\n%d ", AT);
    printf("Tage haben %d Stunden\n\n", AT*24);
    printf("\n%d ", AT);
    printf("Tage haben %d Minuten\n\n", AT*24*60);
    printf("\n%d ", AT);
    printf("Tage haben %d Sekunden\n\n", AT*24*60*60);
           
    return 0; 
}
