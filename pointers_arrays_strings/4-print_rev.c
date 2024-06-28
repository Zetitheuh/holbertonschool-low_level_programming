/**
 * print_rev - print in reverse
 * @s : the string to reverse
 */
void print_rev(char s)
{
	premier_char = *s;
	while(*s != '\0')
	{	
		s++;
	}
	while(*s !+ premier_char)
	{
		printf("%c", *premier_char)
		premier_char--;
	}

}
