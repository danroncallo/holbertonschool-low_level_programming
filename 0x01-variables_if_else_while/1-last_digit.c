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

srand(time(0));
n = rand() - RAND_MAX / 2;

y = x % 10;
if (y > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", x, y);
}
else if (r == 0)
{
printf("Last digit of %i is %i and is 0\n", x, y);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", x, y);
}

return (0);
}
