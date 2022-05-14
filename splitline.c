#include "main.h"

/**
 * shell_split_line - Splits the line to carry out commands
 * @line: Line to be split.
 *
 * Return: The split words.
 */
char **shell_split_line(char *line)
{
	int bufsize = 64;
	int position = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *token;

	if (!tokens)
	{
		perror("./shell");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, "\t\n\r\a");

	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		token = strtok(NULL, "\t\n\r\a");
	}

	tokens[position] = NULL;

	return (tokens);
}
