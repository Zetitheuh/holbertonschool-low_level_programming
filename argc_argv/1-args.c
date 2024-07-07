/**
 * main - RETURN THE NUMBER OF PARAMETER
 * @argc : the number of parameter
 * @argv : char pointer to parameter
 * Return: 0 well exec
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
