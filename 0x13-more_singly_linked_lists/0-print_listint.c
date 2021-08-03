#include "lists.h"
/**
 * print_listint - prints all the elements of listint_t.
 * @h: head of the node.
 * Return: the number of nodes
 * listint_t holds an integer and a pointr.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
