#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{ 

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n < 0)
	{
		printf("is negative");
	}
	else if(n > 0)
	{
		printf("is positive");
	}
	else 
	{
		printf("is zero");
	}
}
