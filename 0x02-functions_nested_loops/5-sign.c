#include "main.h"

/**
 * _print_sign -  prints the sign of a number
 * @c: The number to check
 *
 * Return:	1 and prints + if n is greater than zero
 *		0 and prints 0 if n is zero
 *		-1 and prints - if n is less than zero
 *
 */

int _print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		if (c < 0)
		{
			_putchar(45);
			return (-1);
		}
		else
		{
			_putchar(48);
			return (0);
		}
	}
	_putchar(10);
}
