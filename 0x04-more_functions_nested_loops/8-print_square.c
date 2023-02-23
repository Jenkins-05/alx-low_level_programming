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

		for (j = 1; j <= size; size++)
		{
			for (i = j; i <= size; size++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
}
