#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @index: index of the node that should be deleted
 * @head: pointer to the first element
 * Return: a deletrd node code
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nyc = *head;
	listint_t *recent = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nyc);
		return (1);
	}

	while (x < index - 1)
	{
		if (!nyc || !(nyc->next))
			return (-1);
		nyc = nyc->next;
		x++;
	}


	recent = nyc->next;
	nyc->next = recent->next;
	free(recent);

	return (1);
}
