#include "main.h"
#include <string.h>
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
	int j;
	unsigned int m, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			e = argv[j];

			for (m = 0; m < strlen(e); m++)
			{
				if (e[m] < 48 || e[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

