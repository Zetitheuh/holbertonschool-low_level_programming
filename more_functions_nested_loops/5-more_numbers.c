#include "main.h"
/**
 * more_numbers - print number 0 t0 14
 */
void more_numbers(void)
{
	int i;
	int b;

	for (i = 0; i < 9; i++)
	{
		for (b = 0; b < 15; b++)
		{
		if (b < 10)
		{
			_putchar(b + '0');
		}
		else
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		}
	_putchar('\n');
	}
}
