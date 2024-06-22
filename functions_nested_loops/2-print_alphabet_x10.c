#include "main.h"

void print_alphabet_x10(void)
{
	int compteur = 0;

	while (compteur < 10)
	{
		char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
		compteur++;
	}
}

