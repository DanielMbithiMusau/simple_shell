#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int add_number(int a,  int b);
void shell_loop(void);
char *shell_read_line(void);
char **shell_split_line(char *line);
int shell_launch(char **argv);
int shell_execute(char **argv);

#endif
