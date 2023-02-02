#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all the elements in a list
 *@h: 1st member
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t head;
	size_t c = 0;

	temp = h;
	while (temp != 0)
	{
		_putchar(temp + '0');
		c++;
	}
	return (c + 1);
}
