#include <stdio.h>
/**
 * main - Entry of the program
 * this functions print many exemple of how many bytes are differents types
 *
 *  Return: Zero = well executed
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
