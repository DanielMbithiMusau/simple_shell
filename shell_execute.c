#include "main.h"

/**
 * shell_execute - executes the shell.
 * @args: arguments entered.
 *
 * Return: 1 if NULL or shell_launch function.
 */
int shell_execute(char **argv)
{
	if (argv[0] == NULL)
		return (1);

	return shell_launch(argv);
}
