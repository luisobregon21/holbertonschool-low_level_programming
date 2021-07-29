#include "lists.h"
/**
 * list_len - returns the number of elements in a link list.
 * @h: is of the follwing types...
 * char *str
 * unsigned int len
 * struct list_s *next
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
