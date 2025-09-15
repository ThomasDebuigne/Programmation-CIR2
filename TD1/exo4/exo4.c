/* Premier programme en C */
#include <stdlib.h>
#include <stdio.h>
#include "exo4.h"

int factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorielle(n - 1);
}

int main() {
    int factorielle_for = 4;
    int resultat = 1;
    for (int i = 1; i <= factorielle_for; i++) {
        resultat *= i;

    }
    printf("La factorielle de %d est %d (for)\n", factorielle_for, resultat);

    int factorielle_while = 4;
    int i = factorielle_while;
    int resultat_while = 1;
    while (factorielle_while > 0 && factorielle_while < 20) {
        resultat_while *= factorielle_while;
        factorielle_while--;
    }
    printf("La factorielle de %d est %d (while)\n", i, resultat);

    int n = 4;
    printf("La factorielle de %d est %d (recursive)\n", n, factorielle(n));

    return EXIT_SUCCESS;
}