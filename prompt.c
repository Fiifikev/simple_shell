#include "main.h"



/**
 * prompt- Handles prompt
 * Return: 0
 **/

void prompt(void)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "(NM$$)$$$", 13);

}
