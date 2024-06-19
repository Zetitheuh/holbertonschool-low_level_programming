#include <stdio.h>
/**
 * main - Entry point
 * print number with ,
 *
 * Return: welle exec
 */
int main(void)
{
	int number;
	int virgule;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
