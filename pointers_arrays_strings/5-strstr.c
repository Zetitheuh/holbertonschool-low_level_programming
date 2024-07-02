/**
 * _strspn - check how many char in common
 * @s: the first char ze checked
 * @accept: The second one
 *
 * Return: The nomber of letter in commom
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int compteur = 0;
	int i, j = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
	found = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			found = 1;
			break;
		}
	}
	if (!found)
	{
		break;
		}
		compteur++;
	}
	return (compteur);

