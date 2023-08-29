#include "lists.h"
/**
 * sum_listint - Entry point
 * @head: pointer to my head
 * Return: sum sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *nyc = head;

	while (nyc)
	{
		add += nyc->n;
		nyc = nyc->next;

	}

	return (add);
}
