#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num, numAnt;
    bool creixent = false, decreixent = false;

    printf("Algorisme: Serie_Creixent_Res_Decreixent (exercici 26).\n");

    printf("Introdueix un enter: ");
    scanf("%d", &num);
    fflush(stdin);

    while (num != 0 && !(creixent && decreixent)) {

        numAnt = num;
        printf("Introdueix un enter: ");
        scanf("%d", &num);
        fflush(stdin);

        if (num != 0) {
            if (numAnt <= num) {
                creixent = true;
            } else {
                decreixent = true;
            }
        }
    }

    if (creixent && decreixent || !(creixent || decreixent)) {
        printf("Serie no creixent");
    } else {
        if (creixent) {
            printf("Serie creixent");
        } else {
            printf("Serie decreixent");
        }
    }

    return 0;
}
