#include <stdio.h>
/**
 * main - Print alphabets in lower case
 *
 *Return: 0
*/
int main(void)
{
	int counter;

for (counter = 'a'; counter <= 'z'; counter++)
{
	if (counter == 'q' || counter == 'z')
		return;
	putchar(counter);
}
printf("\n");
return (0);
}
