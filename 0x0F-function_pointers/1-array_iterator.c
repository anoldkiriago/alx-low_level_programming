#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: my array
 * @size: the size
 * @action: pointer function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
