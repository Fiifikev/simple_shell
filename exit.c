#include "main.h"

/**
 *exit_shell - exting the shell
 *@cmd: token command
 *Return:0
 */


void exit_shell(char **cmd)
{
int status = 0;
if (!cmd[1])
{
shell_mem(cmd);
exit(EXIT_SUCCESS);
}
status = _atoi(cmd[1]);
shell_mem(cmd);
exit(status);
}



/**
 *free_shell - free all the memory allocated and exit
 *@cmd: pointer to command memory
 *Return: 0
 */

void free_shell(char **cmd)
{
size_t i = 0;

if (!cmd)
return;

while (cmd[i])
{
free(cmd[i]);
i++;
}

if (!cmd[i])
free(cmd[i]);
free(cmd);
exit(EXIT_FAILURE);
}




