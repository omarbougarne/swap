#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nom[3];

    printf("Entrer le premier nombre: ");
    scanf("%d", &nom[0]);

    printf("Entrer le deuxieme nombre: ");
    scanf("%d", &nom[1]);

    printf("Entrer le troisieme nombre: ");
    scanf("%d", &nom[2]);

    int temp = nom[0];
    nom[0] = nom[2];
    nom[2] = temp;
    printf("After swapping: %d, %d, %d\n", nom[0], nom[1], nom[2]);
    return 0;
}
