/**
 * _strspn - check how many caractere are in s
 * @s: the string checked
 * @accept: The chars to check in s
 *
 * Return: Nomber of char in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int compteur = 0;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
		compteur++;
			break;
		}
	}
	if (accept[i] == '\0')
	{
		break;
	}
		s++;
	}
	return (compteur);
}
