#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string in reverse
 * @s: The string to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
	d++;
	}

	for (d -= 1; d >= 0; d--)
	{
	putchar(s[d]);
	}
	putchar('\n');
}


