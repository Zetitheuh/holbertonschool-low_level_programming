#include "main.h"
/**
 * print_line - print a ligne
 * with n as lenght
 * @n: the lenght choosen
 */
void print_line(int n)
{
	int a;

	for (a = 0; a != n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
