#include "main.h"

/**
 * _strncat - concatenates two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the end of dest
 * @n : integer parameter to compare index to
 * Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1, count2;

	count1 = 0;
	while (*(dest + count1))
	{
		if (*(dest + count1) != '\0')
		{
			count1++;
		}
	}

	count2 = 0;

	while (*(src + count2))
	{
		if (count2 < n)
		{
			*(dest + count1) = *(src + count2);
		}
		count1++;
		count2++;

		if (count2 == n)
		{
			break;
		}
	}
	return (dest);
}
