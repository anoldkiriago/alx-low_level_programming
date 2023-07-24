#include <stdio.h>
/**
 * swap_int - Entry point
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
