#include "main.h"
/**
 *  * shell_mem - frees all the memory
 *   * @cmd: shell command
 *    * Return: 0
 */
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

/**
 *_strcat - Function that concatenates two strings.
 *@destination: destination for concatenation
 *@source: an input string
 *Return: pointer to the resulting string
 */
char *_strcat(char *destination, char *source)
{
char *buff;
buff = destination;

while (*destination)
destination++;
/**the destination will determine the copy concatenation*/

*destination++ = '/';
while (*source)
*destination++ = *source++;
return (buff);
}
