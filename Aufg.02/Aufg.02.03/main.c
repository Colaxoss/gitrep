#include <stdio.h>

int main ()
{
    double EZ, ZZ;
  
  
    printf("\nWillkommen beim Taschenrechner zum Addieren!\n\n");
  
    printf("Bitte geben Sie die erste Zahl ein:\n");
    scanf("%le", &EZ);
    printf("Bitte geben Sie die zweite Zahl ein:\n");
    scanf("%le", &ZZ);
  
    printf("Die Ergebnis lautet\n\n", EZ + ZZ);
  
  
    return 0;
}
