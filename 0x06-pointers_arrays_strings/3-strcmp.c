#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: One of the strings to be compared
 * @s2: second string to be compared
 * Return: A compared  string
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
