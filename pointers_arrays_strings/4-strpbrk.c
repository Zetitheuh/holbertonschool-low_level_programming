/**
 * _strpbrk - start the string s when a char from accept is detected
 * @s: the string we want to show
 * @accept: Element where s start
 * Return: The string s start by first element of acce[t
 */
char *_strpbrk(char *s, char *accept)
{
	char *adresse = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
		accept++;
		}
		accept = adresse;
		s++;
	}
	return (0);
}
