#include "main.h"
#include <stdio.h>

/**
 * swap_int - Main block
 *
 * description: A function that swaps the values of two integers
 *
 * @a: Entry point
 * @b: Entry point
 *
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
