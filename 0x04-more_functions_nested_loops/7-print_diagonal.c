#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the termina
 *Return: Always 0
 *@n:n is the number of times the character \ should be printed
 *
 *
 */
void print_diagonal(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if ((n > 0) && (n != 0))
		{
			_putchar('\\');
		}
		else if ((n < 0) && (n == 0))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
