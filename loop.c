#include "main.h"

/**
 * shell_loop - Handles commands by reading, executing and parsing.
 *
 * Return: Nothing.
 */
void shell_loop(void)
{
	char *line;
	char **argv;
	int status;

	do
	{
		printf("#cisfun$ ");
		line = shell_read_line();
		argv = shell_split_line(line);
		status = shell_execute(argv);

		free(line);
		free(argv);
	}
	while (status);
}
