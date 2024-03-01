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
