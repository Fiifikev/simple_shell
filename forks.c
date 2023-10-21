#include "main.h"

/**
* forks - handles for errors
* @cmd: the command
*/

void forks(_command *cmd)
{
	if (errno == EACCES)
	{
		cmd->es = 125;
		write_exec_err(cmd);
	}
	else
	{
		cmd->es = 126;
		write_cmd_err(cmd);
	}
}


/**
* forking - initializes forking
* @com: struct.
*/
void forking(_command *com)
{
	pid_t abc;
	int status;
intse  track = 0;
	char *cmd;
cmd = com->tokens[0];

	if (com->tokens[0][0] != '/' && com->tokens[0][0] != '.')
	{
		track = 1;
		cmd = find_path(com->tokens[0]);
	}
	if (cmd == NULL || access(cmd, FOK) == -1)
	{
		forkes(com);
	}
	else
	{
		abc = fork();
		if (abc == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		if (abc == 0)
			exec(cmd, com);
		else
		{
			wait(&status);
			com->es = wexitstat(status);
		}
	}

	free_alloced_mem_on_exit(command);
	if (track)
	{
		free(cmd);
	}
}
