/**
 * rev_string - reverse the string
 * @s a long *char
 */
void rev_string(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	while (counter != 0)
	{
		counter--;
		*s = s[counter];
	}
}
