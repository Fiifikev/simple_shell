#include "main.h"

/**
 *message_error - Prints message
 *@name: shell name
 *@cic: number of route
 *@cmd: token command
 *Return: 0
 */
void message_error(char *name, int cic, char **cmd)
{
char str = cic + '0';

write(STDOUT_FILENO, name, _strlen(name));
write(STDOUT_FILENO, ": ", 2);
write(STDOUT_FILENO, &str, 1);
write(STDOUT_FILENO, ": ", 2);
write(STDOUT_FILENO, cmd[0], _strlen(cmd[0]));
write(STDOUT_FILENO, ": not found\n", 12);
}


/**
 *message_error2 - prints the error out
 *@name:name
 *@num: number
 *@cmd:command
 *Return: none
 *
 * * void message_error2(char *name, int num, char **cmd)
 *   {
 *   char str = num + '0';
 *
 *   write(STDERR_FILENO, name, _strlen(name));
 *   write(STDERR_FILENO, ": ", 2);
 *   write(STDERR_FILENO, &str, 1);
 *   write(STDERR_FILENO, ": ", 2);
 *   write(STDERR_FILENO, cmd[0], _strlen(cmd[0]));
 *   write(STDERR_FILENO, ": not found", 12);
 *   write(STDERR_FILENO, "\n", 1);
 *   }
 *
 *
 */

