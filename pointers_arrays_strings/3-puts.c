/**
 * _puts - print a string
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
}
