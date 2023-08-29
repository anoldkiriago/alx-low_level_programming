#include "lists.h"
/**
 * insert_nodeint_at_index - Entry point
 * @idx: index of the list where the new node should be added
 * @n: integer
 * @head: pointer to my adress
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *nyc = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; nyc && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = nyc->next;
			nyc->next = new;
			return (new);
		}
		else
		{
			nyc = nyc->next;
		}
	}
	return (NULL);
}
