#include "shell.h"



#include <stdio.h>
#include <stdlib.h>

/**
 * handle_getline -  getline
 * @argv - argument vector
 */




void handle_getline(char *argv)
{
	char *ptr = NULL;
	char *cpy = NULL;
	char **token = NULL; 
	int ers = 0;
	int rn = 0;
	char *avc = NULL;
        struct builtshell;
	int ret = 0;
	ssize_t bytes  = 0;
	size_t n = 0;
	shell_t cmd;
	int *avc = avc;
	
	while (1)
	{
		display_prompt(int es);

		ret = getline(&(ptr), &n, stdin);
		getret(&cmd, bytes);
		rn++;

		if (ptr== NULL || _strcmp(ptr, "\n") == 0)
			continue;
		ptr[bytes - 1] = '\0';

		cpy= malloc(sizeof(char) * bytes);
		malloc_checkptr(cpy);
		str_cpy(cpy, ptr);
		token = _split(ptr, cpy);
		if (token== NULL)
			continue;
		ret= ch_builtin(&cmd);
		if (ret != 0)
			continue;

		int es = 0;

		handle_fork(&cmd);
	}
}
