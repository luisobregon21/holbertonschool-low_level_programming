#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @h: address of the head of the list.
 * @n: value of the node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int counter = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (tmp == NULL || counter == idx)
	{
		new->next = tmp;
		*h = new;
		return (new);
	}

	while (tmp && tmp->next && counter < idx)
	{
		tmp = tmp->next;
		counter++;
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
