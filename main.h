#ifndef Main_h
#define Main_h
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>


void process_child(char **cmd, char *name, char **env, int cic);
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);
int _atoi(char *str1);
char *_strcpy(char *destination, char *source);
char *_strcat(char *destination, char *source);
int shell_dir(const char *path);
void _getenv(char **env);
void message_error(char *name, int cic, char **cmd);
void write_exec(char **cmd, char *name, char **env, int cic);
void shell_mem(char **cmd);
void free_shell(char **cmd);
void handle_signal(int  _num_of_prompt);
void _end_of_file(char *buffstr);
char **find_path(char **env);
void exit_shell(char **cmd);
char **shell_token(char *line, const char *str);
int main(int ac, char **av, char **env);
void num_of_prompt(void);

#endif
