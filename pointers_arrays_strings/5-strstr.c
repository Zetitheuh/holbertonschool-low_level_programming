/**
 * _strstr - find if needle is in haystack
 * @haystack: the haystack we looking in
 * @needle: The string to find in haystack
 *
 * Return: the word in common in haystack and needle
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
	char *h = haystack;
	char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
