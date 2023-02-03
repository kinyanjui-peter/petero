#include "lists.h"
/**
 * free_listint2 - fre list
 *@head: head
 *
 *Return: 0;
 */
void free_listint2(listint_t **head)
{
listint_t *nextone, *temp;

temp = *head;
while (temp != NULL)
{
	nextone = temp;
	temp = temp->next;
	free(nextone);
}
head = NULL;
}
