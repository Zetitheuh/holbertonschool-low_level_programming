void puts_half(char *str)
{   
    char *copie = str;
    int counter = 0;
    int counter2 = 0;
    while (copie[counter] != '\0')
    {
        counter++;
    }   if (counter % 2 == 0)
        {
            for (int i = 0; i < counter / 2; i++)
            {
                putchar(str[i]);
            }
        }
        else
        {
            for (int i = 0; i < counter / 2; i++)
            {
                putchar(str[i]);
                i++;
                 putchar(str[i]);
            }
        }
}
