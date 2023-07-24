#include "main.h"
#include <unistd.h>
/**
 * _putchar - Entry point
 * @c: character to print
 * Return: On success 1
 * on error -1 is returned, and errno isset appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
