#include <stdlib.h>
#include <stdio.h>

int main() {
    char operateur;
    int nombre1;
    int nombre2;

    printf("Bonjour et bienvenue dans ma calculatrice !\n");

    printf("Choisissez un operateur (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("Choisissez votre premier nombre : ");
    scanf("%d", &nombre1);

    printf("Choisissez votre deuxieme nombre : ");
    scanf("%d", &nombre2);

    return 0;
}
