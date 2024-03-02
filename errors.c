#include "main.h"


/**
 * msgerror - Prints error
 * @name: shell name
 * @cicles: number of cicles
 * @command: tokenized command
 * Return: nothing
 */
void msgerror(char *name, int cicles, char **command)
{
char cee;

cee = cicles + '0';
write(STDOUT_FILENO, name, _strlen(name));
write(STDOUT_FILENO, ": ", 2);
write(STDOUT_FILENO, &cee, 1);
write(STDOUT_FILENO, ": ", 2);
write(STDOUT_FILENO, command[0], _strlen(command[0]));
write(STDOUT_FILENO, ": not found\n", 12);
}




