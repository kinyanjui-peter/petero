#include "lists.h"
/**
 * free_listint - fre list
 *@head: head
 *
 *Return: 0;
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (temp)
{
head = temp;
temp = temp->next;
free(head);
}
}
