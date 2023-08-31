#include "main.h"
/**
 * get_bit - Entry point
 * @index: index starting from 0 of the bit
 * @n: number to be search
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int nyc;

	if (index > 63)
		return (-1);

	nyc = (n >> index) & 1;

	return (nyc);
}
