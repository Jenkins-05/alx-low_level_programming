#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count_bit = 0;
	unsigned long int _current;
	unsigned long int _xclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		_current = _xclusive >> j;
		if (_current & 1)
			count_bit++;
	}

	return (count_bit);
}

