#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 *@n: numbers of '\' to be printed
 */

void print_diagonal(int n)
{
	int x, y;

	if (x <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y < 0; y < x; y++)
			_putchar('\n');

		_putchar('\\');
		_putchar('\n');
	}
}
