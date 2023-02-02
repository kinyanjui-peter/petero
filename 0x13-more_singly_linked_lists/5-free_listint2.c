#include "lists.h"
/**
 * free_listint2 - fre list
 *@head: head
 *
 *Return: 0;
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *nextone;

if (*head == NULL)
	return;
while (*head != NULL)
{
	nextone = temp;
	nextone = nextone->next;
	free(temp);
}
}
