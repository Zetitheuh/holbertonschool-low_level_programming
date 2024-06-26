#include <stdio.h>
/**
 * fizz - return 0 to 100
 * wih dif outpout for mutiple of 5 and 3 
 */
void fizz(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			printf(" ");
		}

	}
	printf("\n");
}
/**
 * main - use fizz fonctioin
 *
 * Return: always zero
 */
int main(void)
{
	fizz();
	return (0);
}
