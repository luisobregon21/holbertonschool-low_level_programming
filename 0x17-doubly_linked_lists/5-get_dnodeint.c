#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: the index of the node, starting from 0
 * @head: head of the list
 * Return: node at index or NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	tmp = head;

	for (idx = 0; idx < index; idx++)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}
	return (tmp);
}
