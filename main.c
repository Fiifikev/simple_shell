#include "main.h"

/**
 *main - main shell
 *@ac: arguments
 *@env: environ variable
 *@av: argumnets
 *Return:0;
 */

int main(int ac, char **av, char **env)
{
char *line;
char *prompt = "\n$$";
char **cmd;
size_t size = 0;
ssize_t stream = 0;
int cic;
line = NULL;
cic = 0;
(void)ac;


while (1)
{
cic++;
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, prompt, 12);
stream = getline(&line, &size, stdin);
signal(sig, handle_signal);



if ((stream == EOF))
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
process_child(cmd, av[0], env, cic);
}
fflush(stdin);
line = NULL;
size = 0;
}
if (stream == -1)
return (EXIT_FAILURE);
return (EXIT_SUCCESS);
}

