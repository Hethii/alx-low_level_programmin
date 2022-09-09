#include <stdio.h>

/**
 *  main -  Entry point
 *
 *  Description: print 0-9 using putchar
 *  		 while using int variabl
 *
 *  Return: Always 0 {successful}
 *
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar("\n");

	return (0);
}
