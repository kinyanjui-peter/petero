#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	int id;
	int num;
	int i;

	id = fork();
	if (id == 0)
	{
		num = 1;
	}
	else 
	{
		num += 6;
	}
	if (id != 0)
	{
		wait(NULL);
	}
	for (i = 1; i < num + 5; i++)
	{
		printf("%d", i);
		fflush(stdout);
	}
	printf("\n");
	return (0);
}
