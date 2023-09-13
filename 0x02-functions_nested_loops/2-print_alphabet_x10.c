#include "main.h"

/**
 * void print_alphabet_x10 - function to print 10_times alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char al;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
