#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: pointer to the head adress
 * Return: a deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *nyc;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	nyc = (*head)->next;
	free(*head);
	*head = nyc;

	return (x);
}
