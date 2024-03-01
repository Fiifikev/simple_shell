#include "main.h"
/**
 * find_path - gets from PATH
 * @env:  command environ
 * Return: pathways to be precise
 */
char **find_path(char **env)
{
char **ways;
char  *value;
unsigned int i;
value = NULL;
ways = NULL;
i = 0;

value = strtok(env[i], "=");
while (env[i])
{
if (_strcmp(value, "PATH"))
{
ways = shell_token(value, ":");
value = strtok(NULL, "\n");
return (ways);
}
i++;
value = strtok(env[i], "=");
}
return (NULL);
}

/**
 *handle_signal- Handles signals
 *@_num_of_prompt: prompts the handle
 *Return: 0
 */

void handle_signal(int  _num_of_prompt)
{
(void)_num_of_prompt;
write(STDOUT_FILENO, "\n()$$", 15);

}



