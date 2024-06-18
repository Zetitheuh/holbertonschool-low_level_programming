#include <stdio.h>

/**
 * main - Entry of the program
 * Write lowercase alphabet in reverse
 *
 * Return: equal to zero = well executed
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
return (0);
}
