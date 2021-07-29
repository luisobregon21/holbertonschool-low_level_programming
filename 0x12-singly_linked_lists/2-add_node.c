#include "lists.h"
int _strlen(const char *s);
/**
 * add_node - adds a new node at beginning of a list.
 * @head: address of element.
 * @str: string that needs to be duplicated.
 * Return: address of the new element or NULL if fail.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
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
