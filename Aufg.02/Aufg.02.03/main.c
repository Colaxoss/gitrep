#include <stdio.h>

int main ()
{
    double EZ, ZZ;
  
  
    printf("Willkommen beim Taschenrechner zum addieren!\n\n");
  
    printf("Bitte geben Sie die erste Zahl ein:\n");
    scanf("%f", &EZ);
    printf("Bitte geben Sie die zweite Zahl ein:\n");
    scanf("%f", &ZZ);
  
    printf("Das Ergebnis lautet:", EZ+ZZ);
  
  
    return 0;
}
