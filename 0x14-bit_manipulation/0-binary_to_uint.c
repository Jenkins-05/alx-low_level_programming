#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
	int alx_africa;
	unsigned int jenkins = 0;

	if (!b)
		return (0);
	for (alx_africa = 0; b[alx_africa]; alx_africa++)
	{
		if (b[alx_africa] < '0' || b[alx_africa] > '1')
			return (0);
		jenkins = 2 * jenkins + (b[alx_africa] - '0');
	}
	return (jenkins);
}

