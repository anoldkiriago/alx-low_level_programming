#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: points to a string of 0 and 1 chars
 * Return: the number after it is converted
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int nyc = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);

		nyc = 2 * nyc + (b[x] - '0');
	}
	return (nyc);
}
