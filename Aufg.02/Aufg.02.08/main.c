#include <stdio.h>

int main()
{
    int AS;
    int cache;
  
    printf("\nWillkommen beim Tagesrechner Reverse!\n\n");
    
    printf("Bitte geben Sie die Anzahl der Sekunden an.\n");
    scanf("%d", &AS);
           
    printf("\n%d ", AS);
    cache = AS/60/60/24;
    printf(" Sekunden sind %d Tage\n\n", cache);
    printf("Es bleiben %d Stunden\n\n", AS/60 % 60);
    printf("Es bleiben %d Minuten\n\n", AS % 60);
    //printf("Es bleiben %d Sekunden\n\n", );
           
    return 0; 
}
