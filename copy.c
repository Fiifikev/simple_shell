#include "main.h"



/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: same not 0
 */

int _strcmp(char *s1, char *s2)
{
unsigned int inte;
inte = 0;

while (s1[inte])
{
if (s1[inte] != s2[inte])
return (0);
inte++;
}

return (1);
}


























