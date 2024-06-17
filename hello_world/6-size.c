#include <stdio.h>
/**
 * main - Entry of the program
 * this functions print many exemple of how many bytes are differents types
 */
int main (void)
{
	printf("Size of a char\n", sizeof(char));
	printf("Size of an int\n", sizeof(int));
	printf("Size of long int\n", sizeof(long int));
	printf("Size of a long long int\n", sizeof(long int));
	printf("Size of a float\n", sizeof(float));	
	return (0);
}
