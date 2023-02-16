#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
int main(int argc, char **argv)
{
	char *command = NULL;
	size_t len = 0;
	char *token;
 	 pid_t pid;
	 int status;

	while(1)
	{
		printf("$ ");
		
		getline(&command, &len, stdin);
	//	
	//	printf("%s ", command);
		
		token = strtok(command, "\n"); //tokenize
		
		char *arr[] = {token, NULL};//assighn token to array
		
		pid = fork();
		
		if (pid == -1)
		{
			perror("error");
		}
		else if (pid == 0)
		{
			execve(arr[0], arr, NULL);
		}
		else
		{
			wait(&status);
		}

	}
	free(command);
	return (0);
}
//while(1) or while(read) leads to infianite loop untill the
// loop is manually terminated.
//
//
