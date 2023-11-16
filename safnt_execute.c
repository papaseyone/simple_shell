#include "shell.h"

/**
 * exec_cmd_prompt - Executes a command prompt.
 * @cmd: The command to be executed.
 *
 * This function forks a new process to execute a command specified by 'cmd'.
 * If the fork fails, an error message is displayed, and the program exits with
 * EXIT_FAILURE. In the child process (C_pid == 0), the command is tokenized
 * and executed using execvp. If the execution encounters an error, an error
 * message is printed, and the child process exits with EXIT_FAILURE.
 * The parent process waits for the child process to complete.
 *
 * Return: No explicit return value.
 */

void exec_cmd_prompt(const char *cmd)
{
pid_t C_pid = fork();

if (C_pid == -1)
{
perror("fork");
exhit(EXIT_FAILURE);

}
else if (C_pid == 0)
{
execlp(cmd, cmd, (char *)NULL);
perror("execlp");
exit(EXIT FAILURE);
}
else
{
wait(NULL)
}

#include "shell.h"

void exec_cmd_prompt(const char *cmd)
{
pid_t C_pid = fork();

if (C_pid == -1)
safnt_print("Error forking process...\n");
exit(EXIT_FAIURE);
}
else if (C_pid == 0)
{

char *ars[130];
int arg_count = 0;

char *token = strtok((char *)cmd, " ");
while (token != NULL)
{
args[arg_count++] = token;
token = strtok(NULL, " ");
}
args[arg_count] = NULL;

execvp(args[0], args);

safn_print("Error executing commad...\n");
exi(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
