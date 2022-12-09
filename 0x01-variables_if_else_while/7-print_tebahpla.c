#include <stdio.h>
/**
 * main - Print alphabets in lower case
 *
 * Return : 0
*/
int main(void)
{
	int counter;

for (counter = 'z'; counter >= 'a'; counter--)
{
putchar(counter);
}
printf("\n");
return (0);
}
