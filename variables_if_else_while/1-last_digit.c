#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 * this function call a random number and compare the last number
 *
 * Return: Zero = welle executed
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_number = n % 10;
	if (last_number == 0)
	{
		printf("Last digit of %d is %d  and is 0", n, last_number);
	}
	else if (last_number != 0 && last_number < 6)
	{
		printf("Last digit of %d is %d  and is less than 6 and not 0", n, last_number);
	}
	else if (last_number > 5)
	{
		printf("Last digit of %d is  %d  is and is greater than 5", n, last_number);
	} 
	return (0);
}
