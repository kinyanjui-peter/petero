#include <stdio.h>
/* main - Entry to body*/
/* Return  : 0*/
int main(void)
{
	int counter;
	char x;

	for (counter = 0; counter < 10; counter++)
	{
		printf("%d", counter);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		printf("%c", x);
	}
	printf("\n");
	return (0);
}
