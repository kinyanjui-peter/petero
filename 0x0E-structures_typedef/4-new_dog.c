#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a copy
 *@name: first member
 *@age: second member
 *@owner: third member.
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int c;
	int x;
	int lname = 0;
	int lown = 0;
	struct dog *ptr;
	int stname;
	int stown;

	/*if (new_dog)*/
	{
	for (c = 0; (name[c] != '\0'); c++)
	{
		lname++;
	}
	for (x = 0; (owner[x] != '\0'); x++)
	{
		lown++;
	}
	ptr = malloc(sizeof(dog_t));
		if (ptr == NULL)
		return (NULL);
		free(ptr);
	ptr->name = malloc(sizeof(char) * (lname + 1));
if (ptr->name == NULL)
	{
	free(ptr->name);
	return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (lown + 1));
if (ptr->owner == NULL)
{
	free(ptr->owner);
	return (NULL);
}
for (stname = 0; stname <= lname; stname++)
{
	ptr->name[stname] = name[stname];
}
for (stown = 0; stown < lown; stown++)
{
	ptr->owner[stown] = owner[stown];
}
ptr->age = age;
return (ptr);
free(ptr);
}
}
