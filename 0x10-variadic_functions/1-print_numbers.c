#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;

	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && y == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
