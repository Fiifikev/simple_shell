#ifndef Main_h
#define Main_h
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int ac, char **av, char **env);
void prompt(void);
void handle(int signals);
void _EOF(char *buffer);
void shell_exit(char **command);
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);

void _create_child(char **command, char *name, char **env, int cicles);
int change_dir(const char *path);
char *_strcpy(char *destination, char *source);
void execute(char **command, char *name, char **env, int cicles);
void print_env(char **env);
char **get_path(char **env);
void msgerror(char *name, int cicles, char **command);
int _atoi(char *s);
char **tokening(char *buffer, const char *s);
void free_mem(char **command);
void free_exit(char **command);
char *_strcat(char *destination, char *source);

#endif
