#include "main.h"

/**
 * shell_cd - handles change of direction in the terminal.
 * @argv: Arguments passed in the terminal.
 *
 * Return: 1 if successful.
 */
int shell_cd(char **argv)
{
	if (argv[1] == NULL)
	{
		fprintf(stderr, "./shell: expected argument to \"cd\"\n");
	}
	else
	{
		chdir(argv[1]);
	}

	return (1);
}

/**
 * shell_exit - implements the exit builtin that exits the shell.
 * @argv: argumentes passed in the terminal.
 *
 * Return: 0.
 */
int shell_exit(char **argv __attribute__((unused)))
{
	return (0);
}
