#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @index: index of the node, starting at 0
 * @head: first node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *nyc = head;

	while (nyc && y < index)
	{
		nyc = nyc->next;
		y++;
	}
	return (nyc ? nyc : NULL);
}
