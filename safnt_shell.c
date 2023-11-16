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
safnt_readCmd(cmd, sizeof(cmd));
exec_cmd_prompt(cmd);
}

return (0);
}
