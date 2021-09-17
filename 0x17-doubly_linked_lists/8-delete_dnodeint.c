#include "lists.h"
/**
 * *delete_dnodeint_at_index - deletes a node at a specific index.
 * @head: pointer to the head pointer.
 * @index: where node shpuld be deleted.
 * Return: 1 if succeed, -1 if fail.`
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL, *tmp;
	unsigned int counter = 1;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (counter < index)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
		counter++;
	}
	node = tmp->next;
	tmp->next = tmp->next->next;
	/* tmp->next = node->next; is eqivalent to whats above */
	free(node);

	return (1);
}
