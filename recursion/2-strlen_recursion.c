/**
 * _strlen_recursion - retur the lenght of a char
 * @s: The char we loking for
 * Return: Lenght of *char s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}


