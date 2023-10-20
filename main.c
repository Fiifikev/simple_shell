#include "shell.h"






/**
* shell_main - handles the mode of the shell
* @env: argument
* @argv: argument vector
*
* Return: 0
*/

int shell_main(int env, char *argv[])
{
	(void) env;

	if (argv == NULL || *argv == NULL)
	{
		exit(EXIT_FAILURE);
	}
	signal(SIGINT, handle_sigint);
	handle_getline(argv[0]);

	return (0);
}
