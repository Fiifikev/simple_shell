#include "main.h"




/**
 *_atoi - Converts string  to to integer.
 *@str1: String input
 *Return: number
 */

int _atoi(char *str1)
{
int idx;
int tracker;
int str3;
int outcome;
unsigned int solution;
solution = 0;
tracker = 1;
str3 = 0;

for (idx = 0;  str1[idx] != '\0'
&& str3 != 2; idx++)
{
if (str1[idx] == '-')
tracker *= -1;

if (str1[idx] >= '0' && str1[idx] <= '9')
{
str3 = 1;
solution *= 10;
solution += (str1[idx] - '0');
}
else if (str3 == 1)
str3 = 2;
}

if (tracker == -1)
outcome = -solution;
else
outcome = solution;

return (outcome);
}

