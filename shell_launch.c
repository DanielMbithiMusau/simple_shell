#include "main.h"

/**
 * shell_launch - creates a child process and then launches the shell.
 * @argv: Arguments entered in the terminal.
 *
 * Return: 1.
 */
int shell_launch(char **argv)
{
	pid_t child;
	int status;

	child = fork();

	if (child == -1)
	{
		perror("./shell");
	}

	if (child == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("./shell");
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			waitpid(child, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
