#include "main.h"

/**
 * print_to_98 - print to 98 max
 * @n: the stater to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n);
				_putchar(',');
				_putchar('\n');
			}
		}
	}
}
