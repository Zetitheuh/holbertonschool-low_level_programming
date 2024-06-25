#include "main.h"
/**
 * print_numbers - print to 0 to 9
 * using for and the var index to putchar 0 to 9
 */
void print_numbers(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		_putchar(index+ '0');
	}
	_putchar('\n');
}
