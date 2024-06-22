#include "main.h"
/**
 * _isalpha - prototype function
 * @c: the caracter to check
 *
 * Return: 1 if lower and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
