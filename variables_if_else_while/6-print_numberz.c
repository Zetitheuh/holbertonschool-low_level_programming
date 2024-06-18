#include <stdio.h>

/**
 * main - Entry of the program
 *  print all digit number with putchar
 *
 *  Return: Zero if program well executed
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
return (0);
}
