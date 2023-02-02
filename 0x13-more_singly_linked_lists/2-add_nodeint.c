#include "lists.h"
/**
 * add_nodeint - adds a new node at the start
 *@head: head pointer
 *@n: n variable
 *Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
	return (0);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
