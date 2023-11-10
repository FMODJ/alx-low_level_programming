#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num;

	num = 0;

	if (!b)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			free((void *)b);
			exit(0);
		}
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		num <<= 1;
		if (b[index] == '1')
			num += 1;
	}

	return (num);
}
