#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: unsigned int
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);

	return (d);
}
