#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: the number of
 * members
 * @size: the size
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int b = 0, c = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = nmemb * size;
	x = malloc(c);

	if (x == NULL)
		return (NULL);

	while (b < c)
	{
		x[b] = 0;
		b++;
	}
	return (x);
}
