# Simple Shell
This is a simple UNIX interpreter written in C.

## Usage
All the files are compiled on an Ubuntu 20.04 LTS machine with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

```

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

