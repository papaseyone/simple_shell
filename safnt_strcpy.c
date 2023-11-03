#include "shell.h"

/**
 * safnt_strcpy - Copy a string from source to destination.
 * @destin: The destination buffer.
 * @source: The source string to be copied.
 *
 * Copies characters from source to destin until null-terminator
 * is encountered in source. Properly null-terminates destin.
 */


void safnt_strcpy(char *destin, const char *source)

{
if (destin == NULL || source == NULL) {
return;
}

while (*source != '\0') {
*destin = *source;
source++;
desti++;
}

*destin = '\0';
}


/**
 * main - Entry point.
 *
 * Return: Always 0 to indicate successful execution.
 */

int main() 
{
char source[] = "Hello, world!";
char destin[20]; 

safnt_strcpy(destin, source);

printf("Copied string: %s\n", destin);

return 0;
}
