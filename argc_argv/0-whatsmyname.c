/**
 * main - print a argv string from *nom
 * @argc: Nomber of arguments *argv
 * @argv: an array of char
 * Return: 1 if missing argumemt // 0 if argument present
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
