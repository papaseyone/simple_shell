#include "shell.h"

/**
 * safnt_print - Prints a message to the screen
 * @msg: Message to be printed
 *
 * Outputs the provided message to the screen.
 */

void safnt_print(const char *msg)
{
write(STDOUT_FILENO, msg, strlen(msg));
}
