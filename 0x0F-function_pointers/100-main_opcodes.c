#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: no. of arguments
 * @argv: array
 *
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	int bytes, index;
	int (*adress)(int, char **) = main;
	unsigned char opcode;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)adress;
		printf("%.2x", opcode);

		if (index ==  bytes - 1)
			continue;
		printf(" ");
		adress++;
	}
	printf("\n");
	return (0);
}

