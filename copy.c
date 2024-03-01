#include "main.h"



/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: same not 0
 */

int _strcmp(char *s1, char *s2)
{
unsigned int i;
i = 0;

while (s1[i])
{
if (s1[i] != s2[i])
return (0);
i++;
}

return (1);
}


























