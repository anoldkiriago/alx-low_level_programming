#include "main.h"
#include <stdio.h>
/**
 * print_number - Entry point
 * @n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
