#include "main.h"

void print_alphabet(void) {
    char lettre;

    for (lettre = 'a'; lettre <= 'z'; lettre++) {
        _putchar(lettre);
    }
    _putchar('\n');  // Imprime une nouvelle ligne après l'alphabet
}

