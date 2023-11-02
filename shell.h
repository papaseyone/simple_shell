#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<string.h>

void safnt_strcpy(char *destin, const char *source);
int _putchar(char c);
int safnt_print(char *str);
char *acq_loc(char *arg);
int builtIn_cmd(char **arg);
char *loc(char *path, char *arg);


#endif /* MAIN_H */
