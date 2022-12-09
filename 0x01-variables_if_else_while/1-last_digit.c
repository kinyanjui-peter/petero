#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print random number
 *
 * return 0
 *
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

if (last > 5)
{
	printf("the last digit of %d is %d and is greater than 5", n, last);
}
if (last == 0)
{
	printf("the last digit of %d is %d and is 0", n, last);
}
if (last < 6 && last != 0)
{
	printf("the last digit of %d is %d and is less than 6 and not 0", n, last);
}
printf("\n");
return (0);
}
