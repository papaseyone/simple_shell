#include "shell.h"

/**
 * main - Entry point for the simple shell.
 * @c: The number of arguments passed to the program (unused).
 * @env: The environment variables (unused).
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(int c, char **env)
{
	(void)c;
	char *safnt_prompt = "safnt_shell$ ";
	char *buffer = NULL;
	char *path = NULL;
	char *arg[110];
	char *delimiter = " \n";
	size_t buffersize = 0;
	ssize_t number_chars;
	pid_t C_ID;
	int stat, i, k, exe;

	while (1)
	{
		if (issaty(0))
			safnt_print(safnt_prompt);
		number_chars = getline(&buffer, &buffersize, stdin);
		if (number_chars == -1)
		{
			free(buffer);
			free(path);
			exit(0);
		}
		i = 0;
		while (buffer[i])
		{
			if (buffer[i] == '\n')
				buffer[i] = 0;
			i++;
		}
		k = 0;
		arg[k] = strtok(buffer, delimiter);
		while (arg[k])
		{
			arg[++k] = strtok(NULL, delimiter);
		}
		arg[k] = NULL;
		free(path);
		path = acq_loc(arg[0]);
		if (path == NULL)
		{
			if (builtIn_cmd(arg) != 0)
			{
				safnt_print("cd");
				continue;
			}
			else
				safnt_print("non-existent command\n");
			continue;
		}
		C_ID = Fork();
		if (C_ID < 0)
		{
			safnt_print("failed fork");
			free(buffer);
			free(path);
			exit(0);
		}
		else if (C_ID == 0)
		{
			exe = execve(path, arg, env);
			if (exe == -1)
				safnt_print("non-existent command\n");
			free(path);
		}
		else
			wait(&stat);
	}
	free(path);
	free(buffer);
	return (0);
}
