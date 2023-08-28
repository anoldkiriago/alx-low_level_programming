#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: pointer to the head adress
 * @n: node to be added at the end
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *final;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
		*head = fresh;
	else
	{
		final = *head;

		while (final->next != NULL)
			final = final->next;
		final->next = fresh;
	}
	return (*head);
}
