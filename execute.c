#include  "main.h"




/**
 *execute - function that executes a command
 *@command: command pointer
 *@name: shell name
 *@env: environmental variables pointer
 *@cicles: number of executed cicles
 *Return: nothing
 */
void execute(char **command, char *name, char **env, int cicles)
{
char **pathways = NULL, *full_path = NULL;
struct stat st;
unsigned int i = 0;

if (_strcmp(command[0], "env") != 0)
print_env(env);
if (stat(command[0], &st) == 0)
{
if (execve(command[0], command, env) < 0)
{
perror(name);
free_exit(command);
}
}
else
{
pathways = get_path(env);
while (pathways[i])
{
full_path = _strcat(pathways[i], command[0]);
i++;
if (stat(full_path, &st) == 0)
{
if (execve(full_path, command, env) < 0)
{
perror(name);
free_mem(pathways);
free_exit(command);
}
return;
}
}
msgerror(name, cicles, command);
free_mem(pathways);
}
}

