#include "shell.h"


int builtIn_cmd(char **arg)
{
if (strcmp(arg[0], "exit") == 0)
{
safnt_print("Shell is exiting...\n");
exit(0);
}
else if (strcmp(arg[0], "cd") == 0)
{
if (arg[1] == NULL)
chdir(getenv("HOME"));
else
chdir(arg[1]);
}
return(0);
}
