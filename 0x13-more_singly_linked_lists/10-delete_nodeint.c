#include "lists.h"
/**
 * *delete_nodeint_at_index - deletes a node at a specific index.
 * @head: pointer to the head pointer.
 * @index: where node shpuld be deleted.
 * Return: 1 if succeed, -1 if fail.`
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL, *tmp;
	unsigned int counter = 0;

	if (head == NULL)
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
	tmp->next = node->next;
	free(node);

	return (1);
}
