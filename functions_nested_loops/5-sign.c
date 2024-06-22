#include "main.h"
/**
 * print_sign - print + or - for n
 * Description : s
 * @n: the caracter to check
 *
 * Return: 1 if lower and 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0 && n != 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
