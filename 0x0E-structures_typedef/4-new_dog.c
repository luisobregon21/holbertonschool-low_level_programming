#include "dog.h"
char *_strcpy(char *s1, char *s2);
unsigned int _strlen(char *s);
/**
 * *new_dog - creates a new dog
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: name of owner.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *name_cpy;
	char *owner_cpy;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	name_cpy = malloc(_strlen(name) + 1);
	if (name_cpy == NULL)
	{
		free(doggo);
		return (NULL);
	}

	owner_cpy = malloc(_strlen(owner) + 1);
	if (owner_cpy == NULL)
	{
		free(doggo);
		free(name_cpy);
		return (NULL);
	}


	doggo->name = _strcpy(name, name_cpy);
	doggo->age = age;
	doggo->owner = _strcpy(owner, owner_cpy);

	return (doggo);
}
/**
 * *_strcpy - copies one string to another
 * @s1: string being copied
 * @s2: copy of the first string
 * Return: new string
*/
char *_strcpy(char *s1, char *s2)
{
	int idx;

	for (idx = 0; s1[idx] != '\0'; idx++)
		s2[idx] = s1[idx];
	s2[idx] = '\0';
	return (s2);
}
/**
 * _strlen - finds string length
 * @s: string
 * Return: the size of the string.
*/
unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}
