#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string to be returned
 * Return: a duplicated string
 */
char *_strdup(char *str)
{
	int b = 0, c = 1;
	char *x;

	if (str == NULL)
		return (NULL);

	while (str[c])
	{
		c++;
	}

	x = malloc((sizeof(char) * c) + 1);

	if (x == NULL)
		return (NULL);

	while (b < c)
	{
		x[b] = str[b];
		b++;
	}
	x[b] = '\0';
	return (x);
}

