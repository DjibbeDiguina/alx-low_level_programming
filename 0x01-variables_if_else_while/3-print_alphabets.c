#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char al = 'a';
	char a = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
