#include "main.h"
/**
 *_end_of_file - checks the EOF
 *@buffstr: Pointer
 *Return: 0
 */
void _end_of_file(char *buffstr)
{
if (buffstr)
{
buffstr = NULL;
free(buffstr);
}
/* readed  end of file*/
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
free(buffstr);
exit(EXIT_SUCCESS);
}


/**
 *_strlen - Finds the length of a string
 *@s: string pointer
 *Return: length
 */
unsigned int _strlen(char *s)
{
int len;
len = 0;

if (s == NULL)
return (0);

while (*s++)
len++;
return (len);
}
