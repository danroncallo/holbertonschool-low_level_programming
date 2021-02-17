#include "holberton.h"

/**
* swap_int - Function that swaps the values of two integers.
* @a: Number
* @b: Number
*/

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
