#include "main.h"

 /**
 * get_path - gets the value
 *@env: env
 *Return: path
 */
char **get_path(char **env)
{
char **pathways = NULL, *pathvalue = NULL;
unsigned int inte = 0;

pathvalue = strtok(env[inte], "=");
while (env[inte])
{
if (_strcmp(pathvalue, "PATH"))
{
pathvalue = strtok(NULL, "\n");
pathways = tokening(pathvalue, ":");
return (pathways);
}
inte++;
pathvalue = strtok(env[inte], "=");
}
return (NULL);
}


/**
 *handle- Handles signals
 *@_prompt: prompts the handle
 *Return: 0
 */

void handle(int _prompt)
{
(void)_prompt;
write(STDOUT_FILENO, "\n(NMshell) $", 14);

}



