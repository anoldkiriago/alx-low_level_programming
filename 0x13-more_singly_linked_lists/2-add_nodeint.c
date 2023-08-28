#include "lists.h"

/**
 * add_nodeint - Entry point
 * @n: new node to be added
 * @head: pointer to the head adress
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;

	*head = fresh;

	return (fresh);
}
