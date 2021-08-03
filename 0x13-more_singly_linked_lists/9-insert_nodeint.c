#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer of the head.
 * @idx: index where the new node will be added.
 * @n: the value the data will have.
 * Return: address of the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int index;

	if (*head == NULL)
		return (NULL);

	tmp = *head;
	for (index = 0; index < idx; index++)
	{
		if (tmp->next == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new->n = n;
		new->next = tmp;
		*head  = new;
	}
	else
	{
		new->n = n;
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
