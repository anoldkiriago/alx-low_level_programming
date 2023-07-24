#include <stdio.h>
/**
 * _strlen - Entry point
 * @str: The string to find its length
 * Return: the length of @str
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
