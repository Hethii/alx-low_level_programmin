#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the / character
 * Return: a diagonal  line
 */

void print_diagonal(int n)
{
	int co, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (space = 1; space < co; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
