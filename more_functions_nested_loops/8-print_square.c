#include "main.h"
/**
 * print_square - print a square
 * @size: the square size
 */

void print_square(int size)
{

	int heigt, lenght;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (heigt = 0; heigt < size; heigt++)
	{
		for (lenght = 0; lenght < size; lenght++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
