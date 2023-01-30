#include <stdio.h>

int main ()
{
    int Eingabe = 0;
    
    printf("\nWillkommen beim Notenrechner!\n\n");
    
    printf("Bitte geben Sie Ihre Notenpunktzahl ein.\n");
    scanf("%d", &Eingabe);
  
    if(Eingabe>0, Eingabe<10){
        if(Eingabe==10){
            printf("\n 10 Notenpunkte entsprechen einer 1+.\n\n");
        }
        if(Eingabe==9){
            printf("\n 9 Notenpunkte entsprechen einer 1.\n\n");
        }
        if(Eingabe==8){
            printf("\n 8 Notenpunkte entsprechen einer 2+.\n\n");
        }
        if(Eingabe==7){
            printf("\n 7 Notenpunkte entsprechen einer 2.n\n");
        }
        if(Eingabe==6){
            printf("\n 6 Notenpunkte entsprechen einer 3+.n\n");
        }
        if(Eingabe==5){
            printf("\n 5 Notenpunkte entsprechen einer 3.\n\n");
        }
        if(Eingabe==4){
            printf("\n 4 Notenpunkte entsprechen einer 4+.\n\n");
        }
        if(Eingabe==3){
            printf("\n 3 Notenpunkte entsprechen einer 4.\n\n");
        }
        if(Eingabe==2){
            printf("\n 2 Notenpunkte entsprechen einer 5+.\n\n");
        }
        if(Eingabe==1){
            printf("\n 1 Notenpunkt entspricht einer 5.\n\n");
        }
        if(Eingabe==0){
            printf("\n 0 Notenpunkte entsprechen einer 6.\n\n");
        }
    }
    else{
        printf("Fehler! Ungültige Notenpunktzahl!\n\n");
    }
    return 0;
}
