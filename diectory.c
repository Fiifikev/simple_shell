#include "main.h"
/**
 *shell_dir -  function that changes working directory
 *@path: working directory of the shell
 *Return: 0  and -1
 */

int shell_dir(const char *path)
{
char *line;
size_t len;
line = NULL;
len  = 1024;
/**char *getcwd(char line[len], size_t len);*/

if (!path)
path = getcwd(line, len);
if (chdir(path) == -1)
{
perror(path);
return (98);
}
return (1);
}

/**
 *_getenv - environ variables
 *@env: environ point
 *Return: Nothing to put
 */
void _getenv(char **env)
{
size_t i;
size_t len = 0;
i = 0;

while (env[i])
len = _strlen(env[i]);
write(STDOUT_FILENO, env[i], len);
write(STDOUT_FILENO, "\n", 1);
i++;
}

