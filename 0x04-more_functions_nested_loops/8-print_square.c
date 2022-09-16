#include "main.h"

/**
 * print_square - print a square
 *
 * @n: is the number of times the # character
 * Return: a square  line
 */

void print_square(int size)
{
	int co, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			for (hash = 1; hash <= size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
