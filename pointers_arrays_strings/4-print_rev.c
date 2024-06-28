/**
 * print_rev - print in reverse
 * @s : the string to reverse
 */
void print_rev(char s)
{	int compteur;
	char *premier_char = s;
	while(*s != '\0')
	{	
		s++;
		compteur++;
	}
	while(compteur != 0)
	{
		printf("%c", *premier_char)
		premier_char--;
	}

}
