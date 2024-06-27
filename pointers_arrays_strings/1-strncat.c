/**
 * _strncat - add two char
 * @dest : the first char
 * @src : the second
 * @n : define where concat stop
 * Return: the addition of thoses char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int debut_parcours = 0;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0' && debut_parcours < n)
	{
		*dest = *src;
		dest++;
		src++;
		debut_parcours++;
	}
	return (original_dest);
}
