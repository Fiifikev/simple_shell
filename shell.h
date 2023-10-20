#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>
#include <ernno.h>


/**
* struct builtshell - struct
* @ptr : command line arguments
* @cpy: copy command line arguments
* @tokens: token command line arguments
* @ers : error 
* @rn: line number
* @avc : executable name
*/

typedef struct builtshell 
{
	char *ptr;
	char *cpy;
	char **token;
	int ers;
	int rn;
	char *avc;
} shell_t






