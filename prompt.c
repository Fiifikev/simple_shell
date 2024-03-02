#include "main.h"



/**
 * prompt- Handles prompt
 * Return: 0
 **/

void prompt(void)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "(NMshell)$", 13);
}


/**
 * _strcpy - copies
 * @destination: pointer
 * @source: pointer
 * Return: Pointer
 */

char *_strcpy(char *destination, char *source)
{
char *aux = destination;

while (*source)
*destination++ = *source++;
*destination = '\0';
return (aux);
}
