#include "main.h"

/**
 * _abs - function that compute the absolute value of a number
 * @a: function parameter
 * Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}