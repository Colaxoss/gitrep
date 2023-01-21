#include <stdio.h>

int main ()
{
  int wert1, wert2, wert3;
  
  printf("\nGeben Sie den ersten Wert ein.\n");
  scanf("%d", &wert1);
  printf("\nGeben Sie den zweiten Wert ein.\n");
  scanf("%d", &wert2);
  printf("\nGeben Sie den dritten Wert ein.\n");
  scanf("%d", &wert3);
  
    if(wert1<wert2<wert3){
        printf ("\n%d\n\n", wert2);
    }
}
