#include "stdio.h"

/**
 * strlen_int - Returns the length of a string.
 * @str: The string.
 * @len: The length.
 * Return: len
 */
size_t _strlen(const char *str)
/* the function the eturns the length of a string. */
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
