#include "dog.h"
/**
 * print_dog - prints struct dog.
 * @d: pointer to the dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL || (*d).name == NULL)
	{
		printf("nil\n");
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
