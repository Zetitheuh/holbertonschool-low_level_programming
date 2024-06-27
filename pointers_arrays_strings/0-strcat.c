#include "main.h"
/**
 * _strcat - add two char
 * @dest : the first char
 * @src : the second
 * Return: the addition of thoses char
 */
char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	return (original_dest);
}
