#include <stdio.h>

int main()
{
    int anzahlSekunden, anzahlTage, anzahlStunden ,anzahlMinuten;

    // Eingabe Anzahl Sekunden

        printf("Anzahl Sekunden: ");
        scanf("%d", &anzahlSekunden);

    // Tage berechnen

        anzahlTage = ((anzahlSekunden / 60) / 60) / 24;

        anzahlSekunden -= anzahlTage * 24 * 60 * 60;

    // Stunden berechnen

        anzahlStunden = anzahlSekunden / 60 / 60;

        anzahlSekunden -= anzahlStunden * 60 * 60;

    // Minuten berechnen

        anzahlMinuten = anzahlSekunden / 60;

        anzahlSekunden -= anzahlMinuten * 60;   

    // Ausgabe

        printf("Tage    : %d\n", anzahlTage);
        printf("Stunden : %d\n", anzahlStunden);
        printf("Minuten : %d\n", anzahlMinuten);
        printf("Sekunden: %d\n", anzahlSekunden);

    return 0;
}
