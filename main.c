#include <stdio.h>

int main(void) {
   int conto = 0;
    float voto;
    float media;
float somma;
    while (1) {
        printf("inserisci voto (0 per terminare): ");
        scanf("%f", &voto);
        if (voto == 0) {
            break;
        }
        somma += voto;
        conto++;
    }
    if (conto > 0) {
        media = (somma / conto);
        printf ("la media e' = %f", media);
    } else {
        printf ("non trovato");
    }

        }



