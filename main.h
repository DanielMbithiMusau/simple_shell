#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void shell_loop(void);
char *shell_read_line(void);
char **shell_split_line(char *line);
int shell_launch(char **argv);
int shell_execute(char **argv);

/*function declarations for builtin shell commands*/
int shell_cd(char **argv);
int shell_help(char **argv);
int shell_exit(char **argv);
int shell_env(char **argv);

int shell_num_builtins(void);


char *builtin_str[] = {
	"cd",
	"exit",
	"env"
};

int (*builtin_func[]) (char **) = {
	&shell_cd,
	&shell_exit,
	&shell_env
};


#endif

