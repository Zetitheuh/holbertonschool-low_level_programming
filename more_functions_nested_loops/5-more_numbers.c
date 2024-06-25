#include "main.h"
/**
 * more_numbers - print number 0 t0 14
 */
void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
		{
				_putchar('1');
		}

			_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
