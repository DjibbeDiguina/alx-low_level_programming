#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that check uppercase character
 * @c: function parameter
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
