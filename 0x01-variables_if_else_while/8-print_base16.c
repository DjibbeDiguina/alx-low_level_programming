#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char n = '0';
	char al = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
