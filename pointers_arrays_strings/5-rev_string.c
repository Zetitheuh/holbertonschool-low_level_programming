/**
 * rev_string - reverse the string
 * @s: a long *char
 */
void rev_string(char *s)
{
	char temp;
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter / 2; i++)
	{
		temp = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = temp;
	}
}
