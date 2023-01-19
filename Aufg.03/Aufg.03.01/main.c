#include <stdio.h>

int main ()
{
    int EW, Z;
  
    printf("\nWillkommen beim Getränkeautomat\n\n");
    
    printf("Bitte werfen Sie mit 1 einen Euro ein.\n\n");
    scanf("%d", &Z);
    
    if(Z==1){
        printf("Bitte wählen Sie:\n\n");
        printf("1: Cola\n2: Fanta\n3:Sprite\n4: Wasser\n5: Apfelschorle\n\n");
        scanf("%d", &EW);
    
        if(EW==1){
            printf("Sie haben die Cola gewählt. Guten Durst!") 
        }
        else if(EW==2){
            printf("Sie haben die Fanta gewählt. Guten Durst!");
        }
        else if(EW==2){
            printf("Sie haben die Sprite gewählt. Guten Durst!");
        }
        else if(EW==2){
            printf("Sie haben die Wasser gewählt. Guten Durst!");
        }
        else if(EW==2){
            printf("Sie haben die Apfelschorle gewählt. Guten Durst!");
        }
    }
    else{
        printf("\nFehler! Sie haben zu viel bzw. zu wenig eingeworfen!\n");
    }
    return 0;
}
