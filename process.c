#include "main.h"




/**
 *_create_child - Function process.
 *@command: Pointer to tokenized
 *@name: Pointer to shell name.
 *@env: Enviromental variables pointer.
 *@cicles: No of executed cicles.
 *Return: Nothing.
 */
void _create_child(char **command, char *name, char **env, int cicles)
{
int my_p_i_d = 0;
int status = 0;
int waitError = 0;

my_p_i_d = fork();
if (my_p_i_d < 0)
{
perror("Error: ");
free_exit(command);
}
else if (my_p_i_d == 0)
{
execute(command, name, env, cicles);
free_mem(command);
}
else
{
waitError = waitpid(my_p_i_d, &status, 0);
if (waitError < 0)
{
free_exit(command);
}
free_mem(command);
}
}
