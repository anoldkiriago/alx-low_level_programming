#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Entry point
 * @str: string to be added
 * @head: original linked list
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int size = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	while (str[size])
		size++;

	temp->len = size;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
