#include "lists.h"
listint_t *create_node(listint_t *point, int num);
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer of the head.
 * @idx: counter where the new node will be added.
 * @n: the value the data will have.
 * Return: address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	unsigned int counter = 1;

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (counter < idx)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		counter++;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
