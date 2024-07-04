#include "main.h"
/**
 * _memcpy - fait un truc
 * @dest: un quetru
 * @src: un autre quetru
 * @n: dermier quetru
 * Return: retirm dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
