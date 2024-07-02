/**
 * _strspn - check how many caractere are in s
 * @s: the string checked
 * @accept: The chars to check in s
 *
 * Return: Nomber of char in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			counter++;
		}
		else
		{
			break;
		}

	}
}
