#include "shell.h"

/**
 * safnt_readCmd - Reads a command from standard input.
 * @cmd: Pointer to store the command.
 * @size: Size of the buffer.
 *
 * Reads a command from standard input using fgets into 'cmd'.
 * Handles EOF and input errors, terminating with EXIT_SUCCESS or EXIT_FAILURE.
 */


void safnt_readCmd(char *cmd, size_t size)
{
if (fgets(cmd, size, stdin) == NULL)
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
}
