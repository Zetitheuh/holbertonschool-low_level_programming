#include "main.h"
/**
 * print_aplhabet_x10 
 * print alphabet 10 times
 */
void print_alphabet_x10(void)
{
    int compteur = 0;

    while (compteur < 10)
    {
        print_alphabet();
        compteur++;
    }

    _putchar('\n');
}
