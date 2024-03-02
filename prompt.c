#include "main.h"



/**
 * prompt- Handles prompt
 * Return: 0
 **/

void prompt(void)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "(NMshell) $ ", 13);
}


/**
 * _strcpy - copies
 * @dest: pointer
 * @src: pointer
 * Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{
char *aux = dest;

while (*src)
*dest++ = *src++;
*dest  = '\0';
return (aux);
}
