#include <stdio.h>
#include <unistd.h>
/**
 * main - execv function
 *
 *Return: 0
 */
int main(void)
{
	char *command = NULl;
	size_t len = 0;

	{
		while (1)
		{
		printf("$ ");
		getline(&command, &len, stdin);
		printf("%", command);

		execve(argv[0], argv, NULL);
		}
	}
}
