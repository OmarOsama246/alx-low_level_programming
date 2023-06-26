#include "stdio.h"

/**
 * Swaps the values of two integers.
 */

void swap_int(int *a, int *b)
{
	int rev = *a;
	*a = *b;
	*b = rev;
}
