#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: factorial [nymber]\n");
		return -1;
	}

	int num = atoi(argv[1]);
	for (int i = num-1; i > 0; i--)
	{
		num *= i;
	}
	printf("Number is %d\n", num);
}
