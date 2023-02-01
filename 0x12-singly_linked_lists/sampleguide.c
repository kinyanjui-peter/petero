#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct node - stryucture defination
 *@age: 1st member;
 *@next: 2nd member
 */
struct node
{
	int age;
	struct node *next;
};

/**
 * main - body
 *Return: intergers
 */

int main(void)
{
	struct node *nodeA, nodeB, nodeC;
	struct node *header, temp;

	nodeA = (struct node *)malloc(sizeof(struct node));
	nodeB = (struct node *)malloc(sizeof(struct node));
	nodeC = (struct node *)malloc(sizeof(struct node));
	/* assign data values to the node*/
	nodeA->age = 34;
	nodeB->age = 12;
	nodeC->age = 75;
	/*assign links to the nodes*/
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;
	/*assign the address of first node to the header pointer*/
	header = nodeA;
	/* how to printing the link elements*/
	/* declare a counter(temp) to navigating between nodes*/

	temp = nodeA;
	while (temp->next != NULL)
	{
		printf("%d --------->", temp->age);
		temp = temp->next;
	}
	printf("%d --------->", temp->age);
return (0);
}
