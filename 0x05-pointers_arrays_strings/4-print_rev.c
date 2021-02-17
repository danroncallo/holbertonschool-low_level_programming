#include "holberton.h"

/**
* print_rev - Function that prints a string, in reverse
* followed by a new line.
* @s: string
*/

void print_rev(char *s)
{
int i;

while (s[i] != '\0')
i++;

while (i != 0)
{
i--;
_putchar(s[i]);
}
_putchar('\n');
}
