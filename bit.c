 #include "shell.h"

#include <stdio.h>

/**
* splitline- function splits string in tokens.
* @rpe: line pointer to command line string
* @lcopy: pointer to copy of line ptr
*
* Return: 2d array
*/
char **_splitline(char *rpe, char *lcopy)
{
	char *token = NULL;
	char *delim = " \n\t\r";
	char **array = NULL;
	unsigned int count = 0;
	int i = 0;

	if (lcopy == NULL || rpe== NULL)
		return (NULL);
	token = str_tok(rpe, delim);
	count++;

	if (token == NULL)
		return (NULL);
	while (token != NULL)
	{
		token = str_tok(NULL, delim);
		count++;
	}
	array = malloc(sizeof(char *) * count);
	if (array == NULL)
		return (NULL);

	token = str_tok(lcopy, delim);
	for (i = 0; token != NULL; i++)
	{
		array[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		if (array[i] == NULL)
		{
			free_tokens(array);
			return (NULL);
		}

		str_cpy(array[i], token);
		token = str_tok(NULL, delim);
	}
	array[i] = NULL;

	return (array);
}
