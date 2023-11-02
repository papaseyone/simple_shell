#include "shell.h"

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written (1).
 */


int _putchar(char c)
{
return (write(1, &c, 1));
}

int safnt_print(char *str)
{
int i = 0, count = 0;
while (str[i])
{
count += _putchar(str[i++]);
}
return (count);
}
