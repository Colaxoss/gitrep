#include <stdio.h>

int main ()
{
    double EZ, ZZ;
  
  
    printf("Willkommen beim Taschenrechner zum addieren!\n\n");
  
    printf("Bitte geben Sie die erste Zahl ein:\n");
    scanf("%le", &EZ);
    printf("Bitte geben Sie die zweite Zahl ein:\n");
    scanf("%le", &ZZ);
  
    printf("Das Ergebnis lautet:", EZ+ZZ);
  
  
    return 0;
}
