#include "shell.h"

/**
 * exec_cmd_prompt - Executes a command prompt.
 * @cmd: The command to be executed.
 *
 * Executes the provided command using execvp in a child process.
 * Displays an error message if execution fails. Waits for the child
 * process to complete in the parent.
 */

void exec_cmd_prompt(const char *cmd)
{
pid_t child_pid = fork();

if (child_pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
char *args[128];
int arg_count = 0;

char *token = strtok((char *)cmd, " ");
while (token != NULL && arg_count < 127)
{
args[arg_count++] = token;
token = strtok(NULL, " ");
}
args[arg_count] = NULL;

if (execvp(args[0], args) == -1)
{
perror("execvp");
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
}

