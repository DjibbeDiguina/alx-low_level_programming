#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
