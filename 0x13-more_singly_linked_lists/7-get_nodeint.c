#include "lists.h"
/**
 * get_nodeint_at_index - retun the nth node
 *@head: head pointer
 *@index: counter to the nth elements
 *Return: th nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int x = 0;
	unsigned int n = 0;
	ptr = head;
	while (ptr)
	{
		x++;
	}
	if (index > x)
	{
		return (NULL);
	}
	for (n = 0; n <= index; n++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
