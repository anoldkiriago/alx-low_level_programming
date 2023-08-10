#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * @min: minimal
 * @max: maximum
 * Return: Nothing
 */
int *array_range(int min, int max)
{
	int *b, d = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[d] = min;
		d++;
		min++;
	}
	return (b);
}
