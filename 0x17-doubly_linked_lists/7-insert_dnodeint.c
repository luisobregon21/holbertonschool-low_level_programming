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
	dlistint_t *tmp, *new;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *h;
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new;
		else
		{
			new->next = *h;
			tmp->prev = new;
			*h = new;
		}
		return (new);
	}

	while (tmp->next != NULL || counter + 1 == idx)
	{
		if (counter + 1 == idx)
		{
			if (tmp->next != NULL)
				tmp->next->prev = new;
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
		counter++;
	}
	free_dlistint(new);
	return (NULL);
}
