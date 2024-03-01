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

