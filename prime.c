#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: prime [nymber]\n");
		return -1;
	}

	int num = atoi(argv[1]);
	for (int i = num-1; i > 1; i--)
	{
		if (num % i == 0)
		{
			printf("Number is not prime\n");
			return 0;
		}
	}
	printf("Number is prime\n");
}
