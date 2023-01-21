#include <stdio.h>

int main ()
{
    int Z1, Z2;
  
    printf("\nWillkommen beim größerkleiner-Rechner!\n\n");
    
    printf("Bitte geben Sie die erste Zahl ein.\n");
    scanf("%d", &Z1);
    printf("Bitte geben Sie die zweite Zahl ein.\n");
    scanf("%d", &Z2);
    
    if(Z1<Z2){
        printf("\nDie erste Zahl ist kleiner als die zweite Zahl.\n\n");
    }
    else if(Z1>Z2){
        printf("\nDie erste Zahl ist größer als die zweite Zahl.\n\n");
    }
    else if(Z1==Z2){
        printf("\nSie haben zwei gleiche Zahlen eingegeben.\n\n");
    }
    else{
        printf("\nFehler! Ungültige Zahl!\n\n");
    }
    return 0;
}
