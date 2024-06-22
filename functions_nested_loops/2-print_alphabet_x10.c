#include "main.h"
/**
 * print_alphabet - function
 * print the alphabet X10
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
void print_alphabet(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}
