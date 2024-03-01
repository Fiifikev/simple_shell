#include "main.h"



/**
 * _strcmp - Compares two strings
 * @str1: string 1
 * @str2: string 2
 * Return: same not 0
 */

int _strcmp(const char *str1, const char *str2)
{
unsigned int i;
i = 0;

while (str1[i])
{
if (str1[i] != str2[i])
return (0);
i++;
}

return (1);




/**
 *_strlen - Finds the length of a string
 *@str: string pointer
 *Return: len
 */
unsigned int _strlen(const char *str)
{
int len;
len = 0;

if (str == NULL)
return (0);

while (*str++)
len++;
return (len);
}

/**to Convert the string to an interger*/
