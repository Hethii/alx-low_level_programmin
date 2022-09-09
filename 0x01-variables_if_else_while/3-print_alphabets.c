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
	char ch = 'a';
	char a;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	for (a = 'A'; a <= 'Z' ; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
