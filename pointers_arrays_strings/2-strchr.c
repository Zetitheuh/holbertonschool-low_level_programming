#include "main.h"
/**
 * _strchr - print a pointer started by letter c
 * @s: the char pointer
 * @c: the letter where we start to print the pointer
 *
 * Return: The string started by c or null if c not in *s
 */
char *_strchr(char *s, char c)
	{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	if (*s == '\0')
	{
		return (0);
	}
	return (s);
}
