#include "main.h"

/**
 * print_square - print a triangle
 *
 * @size: is the number of times the # character
 * Return: a triangle line
 */

void print_triangle(int size)
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
				if ((co + hash) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
