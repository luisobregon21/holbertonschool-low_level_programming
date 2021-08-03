#include "lists.h"
/**
 * sum_listint - returns the sum of all data(n)
 * @head: head of a linked list.
 * Return: the sum of all the data.
*/

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
