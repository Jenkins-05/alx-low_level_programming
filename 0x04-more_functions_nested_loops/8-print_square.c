#include "main.h"

/**
 *print_square - prints a square, followed by a new line
 *@size: is the size of the square
 *Return: Always 0
 *
 *
 */
void print_square(int size)
{

	if ((size == 0) || (size < 0))
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		int j, i;

		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
