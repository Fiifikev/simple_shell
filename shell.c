#include "shell.h"

/**
 * prompt_handle - display imformation
 * @information: imformation  displayed
 */


void  prompt_handle(char *information)
{write(STDOUT_FILENO, information, _strlen(information));
}





/**
* handle_signal - signal handler
* @signal: signal argument
*/
void handle_signal(int __attribute__((unused))signal)
{
	char *prompt  = "$$$";

	prompt_handle(prompt);
	signal(signal, handle_signal);
}


/**
* prompt_display - displays prompt
* @ers: error
*/
void prompt_display(int ers)
{
	char *start = "!!! ";
	char *ept = "<<<";
	char *strp = malloc(sizeof(char) * (_counter(ers) + 1));
	char *stop = ">>> $ ";

	if (isatty(STDIN_FILENO))
	{
		malloc_checkptr(strp);
		to_string(ers, strp);
		if (ers == 0)
			prompt(start);
		else
		prompt(ept);
		prompt(strp);
		prompt(stop);
		free(strp);
	}
}

