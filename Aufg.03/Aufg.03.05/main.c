#include <stdio.h>

int main ()
{
    int AE;
    
    printf("\nWillkomen beim Altersrechner!\n\n");
    
    printf("Bitte geben Sie ein Alter ein.\n");
    scanf("%d", &AE);
  
    if(AE>0){
        if(AE<=18){
            printf("\nDer Mensch ist ein Kind/Jugendlicher.\n\n");
        }
        else if(AE>=67){
            printf("\nDer Mensch ist ein Rentner.\n\n");
        }
        else if(18<AE<67){
            printf("\nDer Mensch ist ein Erwachsener.\n\n");
        }
    }
    else{
        printf("\nFehler! Sie haben ein ungültiges ALter eingegeben!\n\n");
    }
    return 0;
}
