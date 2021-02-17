#include "holberton.h"
#include <stdio.h>

/**
* _atoi - convert a string to an integer.
* @s: string to convert.
* Return: the string converted to int.
*/

int _atoi(char *s)
{
unsigned int i = 0, length = 0, sign = 0, sum = 0;
unsigned int init, finish, d, num;

while (s[length] != '\0')
length++;
if (length == 0)
return (0);
for (i = 0; i < length; i++)
{
if (s[i] == '-')
sign++;
if (s[i] >= 48 && s[i] <= 57)
{
init = i;
break;
}
}
for (; i < length; i++)
{
if (s[i] < 48 || s[i] > 57)
{
break;
}
}
finish = i - 1;
for (; init <= finish; init++)
{
num = 1;
d = s[init] - '0';
for (i = 0; i < finish - init ; i++)
num = num * 10;
num = num * d;
sum = num + sum;
}
if (sign % 2 == 1)
sum = -sum;
return (sum);
}
