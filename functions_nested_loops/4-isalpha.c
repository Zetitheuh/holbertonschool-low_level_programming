#include "main.h"
/**
<<<<<<< HEAD
 * _isalpha - prototype function
 * @c: the caracter to check
 *
 * Return: 1 if lower and 0 if not
=======
 * _isalpha - Check is letter or not
 * @c: The caracter to check
 * Return: 1 = letter else not the case
>>>>>>> 44378e61f1f407d2f29b18fd5990b0e724e200a0
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
