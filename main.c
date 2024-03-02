#include "main.h"



/**
 * main - shell
 * @num_of_inp_args: Number
 * @arr_of_inp_args: Pointer
 * @env: Pointer .
 * Return: 0.
 */

int main(int num_of_inp_args, char **arr_of_inp_args, char **env)
{
char *buffer = NULL, **command = NULL;
size_t buf_size = 0;
ssize_t stream = 0;
int cicles = 0;
(void)num_of_inp_args;

while (1)
{
cicles++;
prompt();
signal(SIGINT, handle);
stream = getline(&buffer, &buf_size, stdin);
if (stream == EOF)
_EOF(buffer);
else if (*buffer == '\n')
free(buffer);
else
{
buffer[_strlen(buffer) - 1] = '\0';
command = tokening(buffer, " \0");
free(buffer);
if (_strcmp(command[0], "exit") != 0)
shell_exit(command);
else if (_strcmp(command[0], "cd") != 0)
change_dir(command[1]);
else
_create_child(command, arr_of_inp_args[0], env, cicles);
}
fflush(stdin);
buffer = NULL, buf_size = 0;
}
if (stream == -1)
return (EXIT_FAILURE);
return (EXIT_SUCCESS);
}
