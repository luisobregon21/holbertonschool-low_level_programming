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
	listint_t *new = NULL, *tmp;
	unsigned int counter = 1;

	tmp = *head;
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			new = create_node(new, n);
			new->next = tmp;
			*head  = new;
			return (new);
		}

		if (counter == idx)
		{
			new = create_node(new, n);
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		counter++;
	}

	if (counter > idx)
	{
		return (NULL);
	}

	return (0);
}
/**
 * create_node - creates a new node
 * @point: a listint_t pointer
 * @num: the data for the node.
 * Return: the node created
*/
listint_t *create_node(listint_t *point, int num)
{
	point = malloc(sizeof(listint_t));
	if (point == NULL)
	{
		return (NULL);
	}

	point->n = num;

	return (point);
}
