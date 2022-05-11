#include "main.h"

/**
 * main - Acts as a simple shell.
 *
 * Return: -1 if there is any error.
 */
int main(void)
{
	pid_t child;
	int status;
	char *command[16] = {NULL};
	char *envp[] = {NULL};	
	char *buffer = NULL;
	char *token = NULL;
	size_t characters, bufsize;

	while (1)
	{
		printf("#cisfun$ ");

		if (getline(&buffer, &bufsize, stdin) == -1)
			break;
		
		token = strtok(buffer, "\t\n\r");
		
		for (characters = 0; token != NULL && characters < 16; characters++)
		{
			command[characters] = token;
		
			token = strtok(NULL, "\t\n\r");
		}
		command[characters] = NULL;


		child = fork();

		if (child == -1)
		{
			perror("Error");
			return (-1);
		}
		if (child == 0)
		{
			if (execve(command[0], command, envp) == -1)
			{
				perror("./shell");
				return (-1);
			}
			printf("There was an error in executing the function\n");
		}
		else
		{
			wait(&status);
		}
	}
	printf("\n");
	free(buffer);
	exit(status);
}
