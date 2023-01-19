#include <stdio.h>

int main()
{
    int AS, Tag, Sek, Std, Min;
  
    printf("\nWillkommen beim Tagesrechner Reverse!\n\n");
    
    printf("Bitte geben Sie die Anzahl der Sekunden an.\n");
    scanf("%d", &AS);
           
    printf("\n%d ", AS);
    Tag = AS/60/60/24;
    printf(" Sekunden sind %d Tage\n\n", Tag);
    Std = (AS/60) % 60;
    printf("Es bleiben %d Stunden\n\n", Std);
    Min = AS % 60;
    printf("Es bleiben %d Minuten\n\n", Min);
    Sek = Min/60;
    printf("Es bleiben %d Sekunden\n\n", Sek);
           
    return 0; 
}
