#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list.
 * @head: address of the elements.
 * @n: constant int
 * Return: address of the new node, NULL if it fails.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
