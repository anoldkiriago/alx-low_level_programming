#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Entry point
 * @h: number of elements returned
 * Return: number of elememts
 */
size_t list_len(const list_t *h)
{
	size_t amt = 0;

	while (h)
	{
		h = h->next;
		amt++;
	}
	return (amt);
}
