#include "main.h"

/**
 * main - Executes the shell loop.
 * @argc: Number of arguments on the terminal.
 * @argv: Arguments on the terminal.
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	shell_loop();

	return (0);
}
