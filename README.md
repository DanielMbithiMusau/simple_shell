# Simple Shell
This is a simple UNIX interpreter written in C.

## Usage
All the files are compiled on an Ubuntu 20.04 LTS machine with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

```
Once compiled to start the program , run:
```./hsh```

To exit the shell run:
```$ exit```

The shell supports most shell commands, such as `cat`, `pwd`, `ls` and lots more.

## Testing
The shell works as the following in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.cshell.c test_ls_2
$
```
## Built-ins
The following built-ins are supported by the hsh shell:
- `env` - Prints the current environment.
- `setenv VARIABLE VALUE` - Initializes a new environment VARIABLE with VALUE, or modifies an existing VARIABLE with VALUE.
- `unsetenv VARIABLE`- Removes an environment variable.

## Return Value
Hsh shell will exit with status 0 unless status is specified with syntax `exit VALUE`.

## Authors
* Daniel Musau
* Carol Waithaka
