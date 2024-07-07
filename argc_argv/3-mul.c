#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]) * atoi(argv[2])

	(void)argv;
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	
	printf("%d\n", n);
	return (0);

}
