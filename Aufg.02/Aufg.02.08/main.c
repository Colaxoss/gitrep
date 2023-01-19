#include <stdio.h>

int main()
{
        int AS, Tag, Sek, Std, Min;
  
        printf("\nWillkommen beim Tagesrechner Reverse!\n\n");
    
        printf("Bitte geben Sie die Anzahl der Sekunden an.\n");
        scanf("%d", &AS);
    
        Sek = Min*60;
        Min = AS % 60;
        Std = (AS/60) % 60;
        Tag = AS/60/60/24;
    
        printf("\n%d ", AS);
        printf(" Sekunden sind %d Tage\n\n", Tag);
        printf("Es bleiben %d Stunden\n\n", Std);
        printf("Es bleiben %d Minuten\n\n", Min);
        printf("Es bleiben %d Sekunden\n\n", Sek);
           
        return 0; 
}
