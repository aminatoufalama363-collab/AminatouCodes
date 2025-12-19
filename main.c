#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"

int main() {
    printf("Resolution d'une equation du second degre de la forme ax^2 + bx + c = 0\n");
    int a, b, c;
    equationSecondDeg(a, b, c);
    printf("\nTests de la fonction factorielle et la fonction puissance:\n");
    int result = power( 2, 3 );
    printf( "2^3 == %d\n", result );
    result = fact( 6 );
    printf( "6! == %d\n", result );
    printf("\nTest de la fonction de permutation:\n");
    int x = 5, y = 10;

    printf("Avant permutation: x = %d\n, y = %d\n", x, y);

    permutation(&x, &y);

    printf("Apres permutation : x = %d\n, y = %d\n", x, y);
    printf("\nAffichage du Tableau:\n");
    displayTable();

    int n = 0;
    printf("\nEntrez un entier pour tester si c'est un nombre premier: ");
    scanf("%d", &n);
    if (estPremier(n)) {
        printf("\n%d est un nombre premier.\n", n);
    } else {
        printf("\n%d n'est pas un nombre premier.\n", n);
    }

    printf("\nCalcul de la distance entre deux points:\n");
    Point p1, p2;
    printf("Entrez les coordonnees du premier point (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Entrez les coordonnees du second point (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    float dist = distance(p1, p2);
    printf("La distance entre les deux points est: %.2f\n", dist);

return EXIT_SUCCESS;
}

