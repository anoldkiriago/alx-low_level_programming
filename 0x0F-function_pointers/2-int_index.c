#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: my array
 * @size: size of my array
 * @cmp: pointer to my function
 * Return: index of the first element for which 
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
