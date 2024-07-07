/**
 * main - print all argv arguments
 * @argc: the number of arguments
 * @argv: the type of argument
 * Return: 0
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
