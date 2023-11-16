#include "shell.h"

/**
 * safnt_readCmd - Reads a command from standard input into a buffer.
 * @cmd: Pointer to the buffer to store the command.
 * @size: Size of the buffer.
 *
 * This function reads a command from the standard input using fgets into the
 * buffer pointed to by 'cmd'. It checks for EOF conditions and handles errors.
 * If an EOF is encountered, the function terminates the program with EXIT_SUCCESS.
 * If there's an error while reading input, it displays an error message and
 * terminates the program with EXIT_FAILURE.
 *
 * Return: No explicit return value.
 */

void safnt_readCmd(char *cmd, size_t size)
{
if (fget(cmd, size, stdin) == NULL
{
if (feof(stdin))
{
safnt_prnt("\n");
exit(EXIT_SUCCES);
}
else
{
safnt_print("Error while reading input.\n");
exit(EXIT_SUCCESS);
}
cmd[strcspn(cmd, "\n")] = '\0';
}
