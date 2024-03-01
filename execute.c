#include "main.h"

/**
 *write_exec - function that executes a command
 *@cmd: command pointer
 *@name: shell name
 *@env: environmental variables pointer
 *@cic: number of executed cicles
 *Return: nothing
 */

void write_exec(char **cmd, char *name, char **env, int cic)
{
char **ways;
char *side_path;
struct stat st;
unsigned int i;
i = 0;
ways = NULL;
side_path = NULL;

if (_strcmp(cmd[0], "env") != 0)
_getenv(env);  /* to check the error of the file*/
if (stat(cmd[0], &st) == 0)
{
if (execve(cmd[0], cmd, env) < 0)
{
perror(name);
free_shell(cmd);
}
}
else
{
ways = find_path(env);
while (ways[i])
{
side_path = _strcat(ways[i], cmd[0]);
i++;
if (stat(side_path, &st) == 0)
{
if (execve(side_path, cmd, env) < 0)
{
perror(name);
shell_mem(ways);
free_shell(cmd);
}
return;
}
}
message_error(name, cic, cmd);
shell_mem(ways);
}
}
