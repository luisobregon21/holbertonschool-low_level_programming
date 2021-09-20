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
	dlistint_t *tmp, *new, *tmp2;
	unsigned int counter = 1;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		new->prev = NULL;
		return (new);
	}

	while (counter < idx)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		counter++;
	}
	tmp2 = tmp->next;
	tmp->next = new;
	tmp2->prev = new;
	new->next = tmp2;
	new->prev = tmp;

	return (new);
}
