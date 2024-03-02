#include "main.h"
/**
 *main - main shell
 *@num_of_inp_args: arguments
 *@env: environ variable
 *@arr_of_inp_args: argumnets
 *Return:0;
 */
int main(int num_of_inp_args, char **arr_of_inp_args, char **env)
{
char *line, **cmd = NULL;
size_t size = 0;
ssize_t stream = 0;
int cic = 0;
(void)num_of_inp_args;

while (1)
{
cic++;
prompt();
signal(SIGINT, handle);
stream = getline(&line, &size, stdin);
/*signal(SIGNIT, handle_signal);*/

if (stream == EOF)
_end_of_file(line);
else if (*line == '\n')
free(line);
else
{
line[_strlen(line) - 1] = '\0';
cmd = shell_token(line, " \0");
free(line);
if (_strcmp(cmd[0], "exit") != 0)
exit_shell(cmd);
else if (_strcmp(cmd[0], "cd") != 0)
shell_dir(cmd[1]);
else
process_child(cmd, arr_of_inp_args[0], env, cic);
}
fflush(stdin);
line = NULL, size = 0;
}
if (stream == -1)
return (EXIT_FAILURE);
return (EXIT_SUCCESS);
}

