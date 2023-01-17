#include <stdio.h>

int main ()
{
    float EZ, ZZ;
  
  
    printf("\nWillkommen beim Taschenrechner zum Addieren!\n\n");
  
    printf("Bitte geben Sie die erste Zahl ein:\n");
    scanf("%f", &EZ);
    printf("Bitte geben Sie die zweite Zahl ein:\n");
    scanf("%f", &ZZ);
  
    printf("Das Ergebnis lautet: \n\n");
    printf("%f", EZ + ZZ);
  
  
    return 0;
}
