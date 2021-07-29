#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: is of the follwing types...
 * char *str
 * unsigned int len
 * struct list_s *next
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
