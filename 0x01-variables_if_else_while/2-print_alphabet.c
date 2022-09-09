#include <stdio.h>

/*
 *  main -  Entry point
 *
 *  Decription: print alphabets in lower cases
 *
 *  Return: Always 0 {successful}
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return(0)
}
