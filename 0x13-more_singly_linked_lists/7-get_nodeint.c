#include "lists.h"
/**
 * *get_nodeint_at_index - returns the (n)th node of a linkd list.
 * @head: the head of the list
 * @index: index of the node, start at 0.
 * Return: the matching node, if not NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
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
