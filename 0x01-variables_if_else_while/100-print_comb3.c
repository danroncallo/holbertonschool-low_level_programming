#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
int y;

x = 48;
y = 49;
while  ((x < 57) && (y < 58))
{
putchar(x);
putchar(y);
if ((x == 56) && (y == 57))
{
putchar('\n');
x++;
y++;
}
else
{
putchar(44);
putchar(32);
if (y < 57)
{
y++;
}
else
{
x++;
y = 1 + x;
}
}
}
return (0);
}
