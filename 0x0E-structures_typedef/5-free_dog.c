#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog structure
 * @d: first memeber;
 * return: void
 *
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
