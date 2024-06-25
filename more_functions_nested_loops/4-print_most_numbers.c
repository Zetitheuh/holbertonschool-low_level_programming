#include "main.h"
/**
 * print_most_numbers - print to 0 to 9
 * using for and the var index to putchar 0 to 9 exept 2 & 4
 */
void print_most_numbers(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		if (index != 2 && index != 4)
		{
			_putchar(index + '0');
		}
	}
	_putchar('\n');
}
