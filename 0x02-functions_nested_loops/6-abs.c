#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: is the value to check
 * Return: abs value of an integer
 */

int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c < 0)
		return (-c);
	return (0);
}
