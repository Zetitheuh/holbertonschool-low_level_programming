#include <stdio.h>
/**
 * _puts - print a string
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(*str);
		str++;
	}
}
