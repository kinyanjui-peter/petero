#include <stdio.h>
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

	if (new_dog == 0)
		return (fail);
	for (c = 0; (*name[c] != '\0'); c++)
	{
		lname++;
	}
	for (x = 0; (*own[x] != '\0'); x++)
	{
		lown++;
	}
	ptr = malloc(sizeof(struct dog));
		if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(lname + 1);
if (ptr->name == NULL)
	{
	free(ptr->name);
	return (NULL);
	}
	ptr->owner = malloc(lown + 1);
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
	ptr->own[stown] = owner[stown];
}
ptr->age = age;
return (ptr);
free(ptr);
}
