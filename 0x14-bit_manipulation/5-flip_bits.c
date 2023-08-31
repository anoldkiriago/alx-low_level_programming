#include "main.h"

/**
 * flip_bits - Entry point
 * @n: integer
 *
 * @m: integer
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int former;
	unsigned long int inclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		former = inclusive >> x;

		if (former & 1)
			count++;
	}

	return (count);
}
