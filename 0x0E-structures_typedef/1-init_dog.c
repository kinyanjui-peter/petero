#include "dog.h"
/**
 * init_dog -function name that return a void
 * @d: pointer to the structure dog
 * @name: pointer to owner.
 * @age: pointer to age
 * @owner: pointer to owner.
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	return;
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
