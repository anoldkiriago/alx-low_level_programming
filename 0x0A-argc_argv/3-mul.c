#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int b1 = 0, b2 = 0;

	if (argc == 3)
	{
		b1 = atoi(argv[1]);
		b2 = atoi(argv[2]);
		printf("%d\n", b1 * b2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
