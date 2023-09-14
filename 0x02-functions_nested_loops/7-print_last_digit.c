#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @i: function parameter
 * Return: c
 */

int print_last_digit(int i)
{
	int c;

	c = i % 10;
	if  (i < 0)
		c = -c;
	_putchar(c + '0');
	return (c);

}
