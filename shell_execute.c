#include "main.h"

/*list of builtin commands, followed by their corresponding functions*/
char *builtin_str[] = {
	"cd",
	"exit"
};

int (*builtin_func[]) (char **) = {
	&shell_cd,
	&shell_exit
};

/**
 * shell_num_builtins - returns the allocated size.
 *
 * Return: Allocated size.
 */
int shell_num_builtins(void)
{
	return (sizeof(builtin_str) / sizeof(char *));
}

/**
 * shell_execute - executes the shell.
 * @argv: arguments entered.
 *
 * Return: 1 if NULL or shell_launch function.
 */
int shell_execute(char **argv)
{
	int i;

	if (argv[0] == NULL)
		return (1);

	for (i = 0; i < shell_num_builtins(); i++)
	{
		if (strcmp(argv[0], builtin_str[i]) == 0)
			return ((*builtin_func[i])(argv));
	}
	return (shell_launch(argv));
}
