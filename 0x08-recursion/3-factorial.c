#include "main.h"
/**
 * factorial - Entry point
 * @n: the number integer
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);

	return (n * factorial(n - 1));
}
