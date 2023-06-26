#include "stdio.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer.
 * @b :The second integer.
 * Return: nothing
 */

void swap_int(int *a, int *b)
	/*the fuction that swaps the values of two integers. */
{
	int rev = *a;
	*a = *b;
	*b = rev;
}
