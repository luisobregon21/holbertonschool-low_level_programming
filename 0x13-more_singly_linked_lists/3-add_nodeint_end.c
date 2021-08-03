#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of list.
 * @head: pointer to the pointer of head.
 * @n: the integer given.
 * Return: address of new element.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = NULL;
	listint_t *last = *head;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = end;

	return (end);
}
