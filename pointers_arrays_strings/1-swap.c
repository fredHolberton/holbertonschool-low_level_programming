#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer of an integer
 * @b: Pointer of an integer
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

