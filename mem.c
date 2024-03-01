#include "main.h"
/**
 *  * shell_mem - frees all the memory
 *   * @cmd: shell command
 *    * Return: 0
 *     */
void shell_mem(char **cmd)
{
size_t i;
i = 0;

if (!cmd)
return;

while (cmd[i])
{
free(cmd[i]);
i++;
}
/*memory  is free*/

if (!cmd[i])
free(cmd[i]);
free(cmd);


}
