#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - basic dog descript.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*the prototypes are down below*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG */
