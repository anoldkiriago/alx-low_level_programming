#include "lists.h"

/**
 * free_listint2 - Entry point
 * @head: pointer to the head adress
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *copa;

	if  (head == NULL)
		return;

	while (*head)
	{
		copa = (*head)->next;
		free(*head);
		*head = copa;
	}
	head = NULL;
}
