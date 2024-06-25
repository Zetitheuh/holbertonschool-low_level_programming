#include "main.h"
/**
 * _isupper - upper or not
 * upper or not
 * Return: 1 is upper and 0 is not
 * @c : value to check
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
