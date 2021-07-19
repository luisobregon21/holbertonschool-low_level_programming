#include "dog.h"
/**
 * free_dog - frees the flee infested dog
 * @d: flees
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
