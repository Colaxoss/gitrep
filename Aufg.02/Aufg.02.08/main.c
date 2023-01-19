#include <stdio.h>

int main()
{
    int AS;
  
    printf("\nWillkommen beim Tagesrechner Reverse!\n\n");
    
    printf("Bitte geben Sie die Anzahl der Sekunden an.\n");
    scanf("%d", &AS);
           
    printf("\n%d ", AS);
    AS = AS/60/60 % 24;
    printf(" Sekunden sind %d Tage\n\n", AS);
    //printf("Es bleiben Minuten\n\n", AT*24*60);
    //printf("Tage haben %d Sekunden\n\n", AT*24*60*60);
           
    return 0; 
}
