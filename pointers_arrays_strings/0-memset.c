/**
 * _memset : change the memory pointed by s
 * @b: what fill the memory
 * @n: no idea
 * Return: Return the a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
