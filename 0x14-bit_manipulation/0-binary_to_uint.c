#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number
 * into an unsigned int.
 * @b: value pointing to a string of 0 and 1.
 *
 * Return: the converted number, or 0 if 1 or  more char strings.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, index = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * index;
		index *= 2;
	}

	return (num);
}
