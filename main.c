#include <stdio.h>
#include "gelas.h"

int main() {
    Gelas a = {10, 0};
    Gelas b = {7, 5};

    printf("Status awal:\n");
    tampilkanStatus(&a);
    tampilkanStatus(&b);

    printf("\nIsi penuh gelas A:\n");
    isiPenuh(&a);
    tampilkanStatus(&a);

    printf("\nTuang dari A ke B:\n");
    tuangke(&a, &b);
    tampilkanStatus(&a);
    tampilkanStatus(&b);

    printf("\nKosongkan gelas B:\n");
    kosongkan(&b);
    tampilkanStatus(&b);

    printf("\nIsi gelas B dengan 4:\n");
    isiDengan(&b, 4);
    tampilkanStatus(&b);

    return 0;
}
