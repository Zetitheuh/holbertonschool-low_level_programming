/**
 * puts_half - print alph of a char
 * @str : the char
 */
void puts_half(char *str)
{   
	char *copie = str;
	int counter = 0;
	int counter2 = 0;
	int i = 0;
    
	while (copie[counter] != '\0')
	{
		counter++;
	}   
	if (counter % 2 == 0)
	{
		for (i = 0; i < counter / 2; i++)
		{
			_putchar(str[i]);
		}
	}
		else
		{
		for (i = 0; i < counter / 2; i++)
		{
			_putchar(str[i]);
			i++;
			 _putchar(str[i]);
		}
	}
}
