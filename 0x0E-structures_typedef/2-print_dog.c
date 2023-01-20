#include "main.h"
#include <stdio.h>
/**
 * print_dog - function to print struct dog
 *
 *@d: pointer to struct dog
 *
 *Return: void
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if ((d->name == NULL)
		printf("name: (nil");
		else
	printf("my_dog.name = %s\n\t", d->name);
	if (d->age == NULL)
		printf("age: (nil");
	else
	printf("my_dog.age = %s\n\t", d->age);
	if (d->owner == NULL)
		printf("owner: (nil");
	else
	printf("my_dog.owner = %s\n\t", d->owner);
}

