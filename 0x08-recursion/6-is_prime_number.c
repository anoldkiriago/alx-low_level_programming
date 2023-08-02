#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - Entry point
 * @n: number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Entry point
 * @n: number to be checked
 * @i: iteration value
 * Return: integer value
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
