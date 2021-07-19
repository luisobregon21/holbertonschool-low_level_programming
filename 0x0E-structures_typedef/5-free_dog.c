#include "dog.h"
/**
 * free_dog - frees the flee infested dog
 * @d: flees
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->name);
	free(d->owner);
	free(d);
}
