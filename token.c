#include "main.h"


/**spliting purposes*/
/**Tokenization*/


/**
 **shell_token - Split puroses
 *@str:  delimniter
 *@buff:  input string.
 *Return: command.
 */
char **shell_token(char *buff, const char *str)
{
char *token = NULL;
int i;
char  **cmds;
size_t bufflenSize = 0;
cmds = NULL;
i = 0;

if (!buff)
return (NULL);

bufflenSize = _strlen(buff);
/*to check up on the string command*/
cmds = malloc((bufflenSize + 1) * sizeof(char *));
if (cmds == NULL)
{
shell_mem(cmds);
perror("Error");
free(buff);
exit(EXIT_FAILURE);
}

token = strtok(buff, str);
while (token != NULL)
{
cmds[i] = malloc(_strlen(token) + 1);
if (!cmds[i])
{
perror("Buffer Error");
shell_mem(cmds);
return (NULL);
}
strcpy(cmds[i], token);
token = strtok(NULL, str);
i++;
}

cmds[i] = NULL;
return (cmds);
}
