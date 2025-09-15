#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    a = 1; b = -3; c = 2;
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("L'equation n'admet pas de solution reelle\n");
    }
    else if (delta == 0) {
        float x = -b / (2 * a);
        printf("L'equation admet une solution double : x1 = x2 = %f\n", x);
    }
    else {
        float x1 = (-b - sqrt(delta)) / (2 * a);
        float x2 = (-b + sqrt(delta)) / (2 * a);
        printf("L'equation admet deux solutions reelles : x1 = %f et x2 = %f\n", x1, x2);
    }
    return EXIT_SUCCESS;

}
