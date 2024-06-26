#include "main.h"
#include <stdio.h>

/**
 * fizz - return 1 to 100
 * with check if division by 3 and 5 return 0
 */
void fizz(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FIzzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
}
int main(void)
{
	fizz();
	return (0);
}
