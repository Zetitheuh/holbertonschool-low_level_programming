#include "main.h"
/**
 * _puts_recursion - print a char with recursion
 * @s: the char printed by recursion
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

