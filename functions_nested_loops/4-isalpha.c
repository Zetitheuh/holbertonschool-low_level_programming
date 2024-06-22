#include "main.h"

/**
 * _isalpha - Check is letter or not
 * @c: The caracter to check
 * Return: 1 = letter else not the case
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
