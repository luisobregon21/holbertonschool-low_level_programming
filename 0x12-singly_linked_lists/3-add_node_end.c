#include "lists.h"
int _strlen(const char *s);
/**
 * add_node_end - adds new node at the end of a list.
 * @head: pointer to the pointer of head.
 * @str: string that needs to be duplicated.
 * Return: address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = NULL;
	list_t *last = *head;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);
	tail->len = _strlen(str);
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = tail;

	return (tail);
}
/**
 * _strlen - finds length of a string.
 * @s: string passed.
 * Return: length of a string.
 */
int _strlen(const char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	;

	return (idx);
}
