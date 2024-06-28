#include "main.h"
/**
 * _puts - print a string
 * @str: The string to print
 */
void _puts(char *str)
{
	int counter = 0;
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
}
