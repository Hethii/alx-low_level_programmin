#include <stdio.h>

/**
 *  main -  Entry point
 *
 *  Description: print alphabets in lower cases
 *
 *  Return: Always 0 {successful}
 *
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
