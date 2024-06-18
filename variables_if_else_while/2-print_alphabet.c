#include <stdio.h>
/**
 *
 * main - Print alphabet
 *
 * Return: Program well executed
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
