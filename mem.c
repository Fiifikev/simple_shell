#include "main.h"



/**
 * free_mem - free memory
 * @command: Pointer to allocated memory
 * Return: nothing.
 */
void free_mem(char **command)
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
