#include "main.h"
/**
 * _strstr - find if needle is in haystack
 * @haystack: the haystack we looking in
 * @needle: The string to find in haystack
 *
 * Return: the word in common in haystack and needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] == needle[j]; j++)
		{
			i++;
			if (needle[j] == '\0')
			{
			return (&haystack[i]);
			}
		}
	}
	return (0);
}
