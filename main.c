
#include <stdlib.h>
#include <stdio.h>

int main() {
    char operateur;
    int nombre_1;
    int nombre_2;

    printf("Bonjour et bienvenue dans ma calculatrice !\n");

    printf("Choisissez un operateur (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("Choisissez votre premier nombre : ");
    scanf("%d", &nombre_1);

    printf("Choisissez votre deuxieme nombre : ");
    scanf("%d", &nombre_2);

    if (operateur == '+') {
        printf("addition\n");

        int resultat = nombre_1 + nombre_2;

        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '-') {
        printf("soustraction\n");

        int resultat = nombre_1 - nombre_2;

        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '*') {
        printf("multiplication\n");

        int resultat = nombre_1 * nombre_2;

        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '/') {
        printf("division\n");

        if (nombre_2 == 0) {
            printf("Impossible de diviser par 0\n");
        }
        else {
            float resultat = (float) nombre_1 / nombre_2;

            printf("%d %c %d = %.2f\n", nombre_1, operateur, nombre_2, resultat);
        }
    }
    else if (operateur == '%') {
        printf("modulo\n");

        if (nombre_2 == 0) {
            printf("Impossible de diviser par 0\n");
        }
        else {
            int resultat = nombre_1 % nombre_2;

            printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
        }
    }
    else {
        printf("Operateur non reconnu\n");
    }

    return 0;
}
