#include <stdio.h>

/**
 *  main -  Entry point
 *
 *  Description: print numbers of base16 in lowercase
 *
 *  Return: Always 0 {successful}
 *
 */

int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');

	return (0);
}
