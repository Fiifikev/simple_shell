#include "main.h"



/**
 * num_of_prompt- Handles prompt
 *  * Return: 0
 **/

void num_of_prompt(void)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$$", 12);

}
