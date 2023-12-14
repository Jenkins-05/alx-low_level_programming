#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @j: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *j)
{
	int i;
	unsigned int numb;

	numb = 0;
	if (!j)
		return (0);
	for (i = 0; j[i] != '\0'; a++)
	{
		if (j[i] != '0' && j[i] != '1')
			return (0);
	}
	for (a = 0; j[i] != '\0'; i++)
	{
		numb <<= 1;
		if (j[i] == '1')
			numb += 1;
	}
	return (numb);
}

