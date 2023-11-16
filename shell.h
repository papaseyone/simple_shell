#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void safnt_print(const char *msg);
void safnt_display_prompt(void);
void exec_cmd_prompt(const char *cmd);
void safnt_readCmd(char *cmd, size_t size);

void read_cmd(char *cmd, size_t size);
void exec_cmd(const char *cmd);





#endif /* SHELL_H */
