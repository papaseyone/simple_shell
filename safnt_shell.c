#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * Runs an infinite loop to process user commands.
 *
 * Return: Always returns 0.
 */

int main(void)
{
char cmd[132];
while (true)
{
safnt_display_prompt();
if (fgets(cmd, sizeof(cmd), stdin) == NULL)
{
if (feof(stdin))
{
safnt_print("\n");
exit(EXIT_SUCCESS);
}
else
{
safnt_print("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
cmd[strcspn(cmd, "\n")] = '\0';

exec_cmd_prompt(cmd);
}
return (0);
}

