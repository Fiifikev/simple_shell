#include "main.h"
/**
 *_EOF -  EOF
 *@buffer_str: Pointer string.
 *Return: None
 */
void _EOF(char *buffer_str)
{
if (buffer_str)
{
free(buffer_str);
buffer_str = NULL;
}
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
free(buffer_str);
exit(EXIT_SUCCESS);
}










/**
 *_strlen - Finds the length of a string
 *@s: string pointer
 *Return: length
 */
unsigned int _strlen(char *s)
{
int lenght;
lenght = 0;

if (!s)
return (0);

while (*s++)
lenght++;
return (lenght);
}
