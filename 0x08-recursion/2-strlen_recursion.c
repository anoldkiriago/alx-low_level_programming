#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: length of string to be found
 * Return: Integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
