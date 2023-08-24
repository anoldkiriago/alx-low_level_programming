#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Entry point
 * @head: to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *former_node;

	while ((former_node = head) != NULL)
	{
		head = head->next;
		free(former_node->str);
		free(former_node);
	}
}
