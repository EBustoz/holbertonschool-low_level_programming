#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.i
 * @c: teh number to check
 * Return: Returns the value of the last digit
 */

int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;

	_putchar('0' + (c % 10));
	return (c % 10);
}
