#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: the int that is unsigned
 * @c: char to be printed
 * Return: The filed array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *g;

	if (size == 0)
		return (NULL);
	g = malloc(size * sizeof(char));

	if (g == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
	{
		g[y] = c;
	}
	return (g);
}
