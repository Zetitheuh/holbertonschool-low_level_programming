#include "main.h"
/**
 * puts2 - print 1/2 caractere
 * @str : the string to use
 */
void puts2(char *str)
{
	int counter = 0;

	while(str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
		counter++;
	}
	_putchar('\n');
}
