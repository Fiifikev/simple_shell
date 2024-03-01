#include "main.h"

/**
 *process_child -  fork to token
 *@cmd: Pointer token
 *@name: Pointer untoken command
 *@env: Env
 *@cic: Number
 *Return: Nothing.
 */
void process_child(char **cmd, char *name, char **env, int cic)
{
int my_pid = 0;
/*pid_t my_pid;*/
int status = 0;
int Errorwait = 0;

/*child process return value of zero */
my_pid = fork();
if (my_pid < 0)
{
perror("fork fail");
free_shell(cmd);
}
else if (my_pid == 0)
{
/*parent process return value of zero*/
write_exec(cmd, name, env, cic);
shell_mem(cmd);
}
else
{
Errorwait = waitpid(my_pid, &status, 0);
if (Errorwait < 0)
{
free_shell(cmd);
}
shell_mem(cmd);
}
}
