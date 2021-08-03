#include "lists.h"
/**
 * listint_len - function returns number of elements in the link list.
 * @h:head of the list.
 * Return: returns number of elements.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int count;

	for (count = 0; tmp != NULL; count++)
	{
		tmp = tmp->next;
	}
	return (count);
}
