#include "main.h"


/**
 *change_dir -  function that changes working
 *@path: working directory
 *Return: 0 and  -1 on failure.
 */

int change_dir(const char *path)
{
char *buf = NULL;
size_t size = 1024;

if (path == NULL)
path = getcwd(buf, size);
if (chdir(path) == -1)
{
perror(path);
return (98);
}
return (1);
}








/**
 *print_env - prints all enviromental variable.
 *@env: enviromental variables pointer
 *return: nothing
 */
void print_env(char **env)
{
size_t inte = 0, length = 0;

while (env[inte])
{
length = _strlen(env[inte]);
write(STDOUT_FILENO, env[inte], length);
write(STDOUT_FILENO, "\n", 1);
inte++;
}
}

