#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a newnode node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: newnode node value
 *
 * Return: the address of newnode node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newnode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
