#include "main.h"
/**
 * print_alphabet -  print the alphabet
 * print the alphabet
 */
void print_alphabet(void)
{
	char lettre;

	lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}

