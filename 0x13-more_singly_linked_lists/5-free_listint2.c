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

temp = *head;
if (*head == NULL)
	return;
while (temp != NULL)
{
	nextone = current;
	nextone = nextone->next;
	free(current;
}
}
