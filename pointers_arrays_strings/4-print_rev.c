#include "main.h"
/**
 * print_rev - print in reverse
 * @s : the string to reverse
 */
void print_rev(char *s)
{	int compteur = 0;

	while (s[compteur] != '\0')
	{
		compteur++;
	}
	while (compteur > 0)
	{
		compteur--;
		_putchar(s[compteur]);
	}
	_putchar('\n');
}
