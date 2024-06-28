/**
 * _strlen - check the lenght of a *char
 * @s : The char to check
 */
int _strlen(char *s)
{
	char *copie = *s;
	int compteur = 0;

	while(*copie != "\0")
	{
		*copie++;
		compteur++;
	}
	return compteur;
}
