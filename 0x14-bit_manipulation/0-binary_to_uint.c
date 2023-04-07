#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * into an unsigned int.
 * @b: value pointing to a string of 0 and 1.
 *
 * Return: the converted number, or 0 if 1 or  more char strings.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int num = 0, index = 0;

	if (!b)
		return (0);

	num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, index = 1; len >= 0; len--, index *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += index;
		}
	}

	return (num);
}


