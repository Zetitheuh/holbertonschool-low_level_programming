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
			_putchar(' ');
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			_putchar(' ');
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FIzzBuzz");
			_putchar(' ');
		}
		else
		{
			printf("%d", a);
			_putchar(' ');
		}
	}
}
