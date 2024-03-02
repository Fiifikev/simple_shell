#include "main.h"
/**
 *_atoi- Converts string  to to integer.
 *@str: String input
 *Return: number
 */

int _atoi(char *str)
{
int st;
int sign = 1, str_f = 0, output;
unsigned int result = 0;

for (st = 0;  str[st] != '\0' && str_f != 2; st++)
{
if (str[st] == '-')
sign *= -1;

if (str[st] >= '0' && str[st] <= '9')
{
str_f = 1;
result *= 10;
result += (str[st] - '0');
}
else if (str_f == 1)
str_f = 2;
}
if (sign == -1)
output = -result;
else
output = result;
return (output);
}

