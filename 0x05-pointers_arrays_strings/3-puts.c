#include <stdio.h>
/**
 * _puts - Entry point
 * @str: String to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
