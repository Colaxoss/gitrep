#include <stdio.h>

int main ()
{
    double EZ, ZZ;
  
  
    printf("Willkommen beim Taschenrechner zum addieren!\n\n");
  
    printf("Bitte geben Sie die erste Zahl ein:\n");
    scanf("%d", &EZ);
    printf("Bitte geben Sie die zweite Zahl ein:\n");
    scanf("%d", &ZZ);
  
    printf("Das Ergebnis lautet:", EZ+ZZ);
  
  
    return 0;
}
