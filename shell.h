#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void safnt_print(const char *msg);
void safnt_display_prompt(void);
void exec_cmd_prompt(const char *cmd);
void safnt_readCmd(char *cmd, size_t size);






#endif /* SHELL_H */
