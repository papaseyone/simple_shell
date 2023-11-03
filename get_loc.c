#include "shell.h"
/**
 * @loc -
 * @path -
 * @arg
 * 
 */+

char *loc(char *path, char *arg)
{
    char *path_dupli;
    char *pathToken;
    char *filePath;
    char *delimiter = ":";
    char *buff;
    
    path_dupli = strdup(path);

    pathToken = strtok(path_dupli, delimiter);

    while (pathToken != NULL)
    {
        safnt_strcpy(filePath, pathToken);
        strcat(filePath, "/");
        strcat(filePath, arg);
        strcat(filePath, "\0");

        if (access(filePath, X_OK) == 0)
        {
            free(path_dupli);
            return (filePath);
        }
        pathToken = strktok(NULL, delimiter);
    }
    
    free(filePath):
    free(path_dupli);
    
    return (NULL);
}
