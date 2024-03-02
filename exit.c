#include "main.h"

/**
 *shell_exit - Exits the shell.
 *@command: Pointer to tokenized command.
 *Return: nothing
 */
void shell_exit(char **command)
{
int status = 0;

if (command[1] == NULL)
{
free_mem(command);
exit(EXIT_SUCCESS);
}

status = _atoi(command[1]);
free_mem(command);
exit(status);
}



/**
 * free_exit - free all the memory allocated and exit
 * @command: pointer to command memory
 * Return: Nothing.
 */

void free_exit(char **command)
{
size_t inte = 0;

if (command == NULL)
return;

while (command[inte])
{
free(command[inte]);
inte++;
}

if (command[inte] == NULL)
free(command[inte]);
free(command);
exit(EXIT_FAILURE);
}



