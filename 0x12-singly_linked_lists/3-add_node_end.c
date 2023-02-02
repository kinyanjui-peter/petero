#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 *@head: double pointer to head
 *@n: contain node elements
 *Return: new node adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;
	newnode = (listint_t)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return;
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		newnode->next = NULL;
		temp->next = newnode;
	}
	return (newnode);
}
