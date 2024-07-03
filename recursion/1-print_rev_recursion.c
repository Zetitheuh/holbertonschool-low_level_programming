#include "main.h"
/**
 * _print_rev_recursion - print a char with recursion
 * @s: the char printed by recursion
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}

