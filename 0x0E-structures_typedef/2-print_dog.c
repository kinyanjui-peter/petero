#include "dog.h"
#include <stdlib.h>
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
	{
		return;
	}
	else
	{
	if (d->name == NULL)
		printf("name: (nil)\n");
		else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("age: (nil)\n");
		else
		printf("Age = %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
		else
		printf("Owner = %s\n", d->owner);
	}
}
