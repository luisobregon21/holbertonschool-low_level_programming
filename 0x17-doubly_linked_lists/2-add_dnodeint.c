#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the address of the head
 * @n:the value of the new element.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (head == NULL)
		new->next = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
