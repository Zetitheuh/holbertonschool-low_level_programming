#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int result;

	(void)argv;
	if (argc != 3)
	{
		printf("ERROR");
		printf("\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);

}
