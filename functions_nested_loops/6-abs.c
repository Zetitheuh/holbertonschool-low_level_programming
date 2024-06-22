#include "main.h"

/**
 * _abs(int) - the function
 * compute the absolute value
 * @n: The number to check
 *
 * Return: the number with the sign reverse if neg
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
