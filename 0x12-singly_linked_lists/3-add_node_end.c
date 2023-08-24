#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * add_node_end - Entry point
 * @str: string
 * @head: my new node
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *former_node;
	size_t j;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (j = 0; str[j]; j++)
		;

	new_node->len = j;
	new_node->next = NULL;
	former_node = *head;

	if (former_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (former_node->next != NULL)
			former_node = former_node->next;
		former_node->next = new_node;
	}
	return (*head);
}

